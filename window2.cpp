#include "window2.h"
#include <QVBoxLayout>
#include <iostream>

Window2::Window2(QWidget *parent) : QWidget(parent)
{
    label = new QLabel("Haven't received a value yet!");
    lineEdit = new QLineEdit();

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(label);
    layout->addWidget(lineEdit); // show up below label
    setLayout(layout); // we are a widget not a window this time, so this is ok.
    QObject::connect(lineEdit,
                     &QLineEdit::returnPressed,
                     this,
                     &Window2::sendMessage);
}

void Window2::sendMessage() {
    // save the line edit's text as a local QString
    QString message = lineEdit->text();
    // Qt extension of C++: emit not a std C++ keyword, but it is in Qt
    // emit a signal with the text of the message
    emit messageTextSent(message);
    std::cout << message.toStdString() << std::endl;
}

void Window2::receiveValue(int value) { // receive value as argument to slot
    std::cout << "receiveValue( " << value << " )" << std::endl;
    label->setText(QString::fromStdString("The value is: "+std::to_string(value)));
}
