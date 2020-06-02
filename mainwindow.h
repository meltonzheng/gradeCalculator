#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSlider>
#include "receiver.h"
#include <vector>

class MainWindow : public QMainWindow
{
    Q_OBJECT 

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots: 
    void acceptInt(double);


private:
    int count=0;
    std::vector<QSpinBox*> spinBoxes;
    std::vector<QSlider*> sliders;
    std::vector<QLabel*> labels;

    QHBoxLayout* layout;

    QLabel* totLabel;

    Receiver* receiver;

    QVBoxLayout* hw_box;
    QVBoxLayout* exams_box;

    QHBoxLayout* single_hw_box1;
    QHBoxLayout* single_hw_box2;

    double score= 0;
};
#endif // MAINWINDOW_H
