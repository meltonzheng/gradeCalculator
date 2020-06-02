#ifndef WINDOW2_H
#define WINDOW2_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>

class Window2 : public QWidget
{
    Q_OBJECT
public:
    explicit Window2(QWidget *parent = nullptr);

public slots:
    void receiveValue(int); // slot to receive value of the spinbox, the int argument
    void sendMessage();

signals:
    void messageTextSent(QString);

private:
    QLabel* label;
    QLineEdit* lineEdit;
};

#endif // WINDOW2_H
