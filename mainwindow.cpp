#include "mainwindow.h"
#include <string>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    // initialize member variables
    layout = new QHBoxLayout();

    hw_box = new QVBoxLayout();
    exams_box = new QVBoxLayout();

    single_hw_box1 = new QHBoxLayout();
    single_hw_box2 = new QHBoxLayout();

    receiver = new Receiver();

     totLabel = new QLabel();



    std::vector<int> scores(11);

    //Make all the necessary widgets

    QSpinBox* spinBox_HW1 = new QSpinBox;
    QSpinBox* spinBox_HW2 = new QSpinBox;
    QSpinBox* spinBox_HW3 = new QSpinBox;
    QSpinBox* spinBox_HW4 = new QSpinBox;
    QSpinBox* spinBox_HW5 = new QSpinBox;
    QSpinBox* spinBox_HW6 = new QSpinBox;
    QSpinBox* spinBox_HW7 = new QSpinBox;
    QSpinBox* spinBox_HW8 = new QSpinBox;
    QSpinBox* spinBox_mid1 = new QSpinBox;
    QSpinBox* spinBox_mid2 = new QSpinBox;
    QSpinBox* spinBox_fin = new QSpinBox;

    spinBoxes.push_back(spinBox_HW1);
    spinBoxes.push_back(spinBox_HW2);
    spinBoxes.push_back(spinBox_HW3);
    spinBoxes.push_back(spinBox_HW4);
    spinBoxes.push_back(spinBox_HW5);
    spinBoxes.push_back(spinBox_HW6);
    spinBoxes.push_back(spinBox_HW7);
    spinBoxes.push_back(spinBox_HW8);
    spinBoxes.push_back(spinBox_mid1);
    spinBoxes.push_back(spinBox_mid2);
    spinBoxes.push_back(spinBox_fin);

    for(auto x : spinBoxes)
    {
        x->setRange(0,100);
    }

    QSlider* slider_HW1 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW2 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW3 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW4 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW5 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW6 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW7 = new QSlider(Qt::Horizontal);
    QSlider* slider_HW8 = new QSlider(Qt::Horizontal);
    QSlider* slider_mid1 = new QSlider(Qt::Horizontal);
    QSlider* slider_mid2 = new QSlider(Qt::Horizontal);
    QSlider* slider_fin = new QSlider(Qt::Horizontal);

    sliders.push_back(slider_HW1);
    sliders.push_back(slider_HW2);
    sliders.push_back(slider_HW3);
    sliders.push_back(slider_HW4);
    sliders.push_back(slider_HW5);
    sliders.push_back(slider_HW6);
    sliders.push_back(slider_HW7);
    sliders.push_back(slider_HW8);
    sliders.push_back(slider_mid1);
    sliders.push_back(slider_mid2);
    sliders.push_back(slider_fin);

    for(auto y : sliders)
    {
        y->setRange(0,100);
    }

    QLabel* hw1 = new QLabel("Homework 1");
    QLabel* hw2 = new QLabel("Homework 2");
    QLabel* hw3 = new QLabel("Homework 3");
    QLabel* hw4 = new QLabel("Homework 4");
    QLabel* hw5 = new QLabel("Homework 5");
    QLabel* hw6 = new QLabel("Homework 6");
    QLabel* hw7 = new QLabel("Homework 7");
    QLabel* hw8 = new QLabel("Homework 8");
    QLabel* mid1 = new QLabel("Midterm 1");
    QLabel* mid2 = new QLabel("Midterm 2");
    QLabel* fin = new QLabel("Final");

    labels.push_back(hw1);
    labels.push_back(hw2);
    labels.push_back(hw3);
    labels.push_back(hw4);
    labels.push_back(hw5);
    labels.push_back(hw6);
    labels.push_back(hw7);
    labels.push_back(hw8);
    labels.push_back(mid1);
    labels.push_back(mid2);
    labels.push_back(fin);

    QWidget* centralWidget = new QWidget();

    //Create individual homework layouts

    std::vector<QHBoxLayout*> hw_layouts;
    QHBoxLayout* hw_one = new QHBoxLayout;
    QHBoxLayout* hw_two = new QHBoxLayout;
    QHBoxLayout* hw_three = new QHBoxLayout;
    QHBoxLayout* hw_four = new QHBoxLayout;
    QHBoxLayout* hw_five = new QHBoxLayout;
    QHBoxLayout* hw_six = new QHBoxLayout;
    QHBoxLayout* hw_seven = new QHBoxLayout;
    QHBoxLayout* hw_eight = new QHBoxLayout;
    QHBoxLayout* mid_one = new QHBoxLayout;
    QHBoxLayout* mid_two = new QHBoxLayout;
    QHBoxLayout* fin_layout = new QHBoxLayout;

    hw_layouts.push_back(hw_one);
    hw_layouts.push_back(hw_two);
    hw_layouts.push_back(hw_three);
    hw_layouts.push_back(hw_four);
    hw_layouts.push_back(hw_five);
    hw_layouts.push_back(hw_six);
    hw_layouts.push_back(hw_seven);
    hw_layouts.push_back(hw_eight);
    hw_layouts.push_back(mid_one);
    hw_layouts.push_back(mid_two);
    hw_layouts.push_back(fin_layout);

    for(unsigned int i = 0; i < labels.size()-3; i++ )
    {
        hw_layouts.at(i)->addWidget(labels.at(i));
        hw_layouts.at(i)->addWidget(sliders.at(i));
        hw_layouts.at(i)->addWidget(spinBoxes.at(i));
    }

    //Create full homework layout

    for(auto x : hw_layouts)
    {
        hw_box->addLayout(x);
    }

    //create full exam layout

    for(unsigned int i = labels.size()-4; i < labels.size(); i++ )
    {
        exams_box->addWidget(labels.at(i));
        exams_box->addWidget(sliders.at(i));
        exams_box->addWidget(spinBoxes.at(i));
    }

    exams_box->addSpacing(50);






    exams_box->addWidget(totLabel);

  //  layout->addWidget(msgLabel);

    layout->addLayout(hw_box);
    layout->addLayout(exams_box);



    //layout->addWidget(drawDemo);

    // set layout to the central widget

    centralWidget->setLayout(layout);

    // then set the central widget to be centralWidget

    setCentralWidget(centralWidget);




    for(unsigned int i = 0; i < labels.size(); i++ )
    {
        QObject::connect(spinBoxes.at(i), // signal sending object
                         QOverload<int>::of(&QSpinBox::valueChanged), // value changed signal sends out an int or a QString
                         sliders.at(i),
                         &QSlider::setValue
                         );
        QObject::connect(sliders.at(i), // signal sending object
                         QOverload<int>::of(&QSlider::valueChanged), // value changed signal sends out an int or a QString
                         spinBoxes.at(i),
                         &QSpinBox::setValue
                         );
    }


    QObject::connect(spinBoxes.at(10),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueFIN);
    QObject::connect(spinBoxes.at(9),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueMID2);
    QObject::connect(spinBoxes.at(8),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueMID1);
    QObject::connect(spinBoxes.at(7),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW8);
    QObject::connect(spinBoxes.at(6),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW7);
    QObject::connect(spinBoxes.at(5),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW6);
    QObject::connect(spinBoxes.at(4),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW5);
    QObject::connect(spinBoxes.at(3),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW4);
    QObject::connect(spinBoxes.at(2),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW3);
    QObject::connect(spinBoxes.at(1),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW2);
    QObject::connect(spinBoxes.at(0),QOverload<int>::of(&QSpinBox::valueChanged), receiver,&Receiver::receiveValueHW1);

    QObject::connect(receiver,&Receiver::signalValue, this,&MainWindow::acceptInt);
}

void MainWindow::acceptInt(double value) {
    if(score != value){
        score = value;
    }
    totLabel->setText(QString::fromStdString("Maximum Grade: " + std::to_string(score)));
}

MainWindow::~MainWindow()
{

}

