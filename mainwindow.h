#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
// arrange widgets vertically
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSlider>
#include "window2.h"
#include "receiver.h"
#include <vector>

class MainWindow : public QMainWindow
{
    Q_OBJECT // Macro, needed whenever your class uses signals and slots, goes in the class declaration
    // signals and slots to be explained in a moment
    // only works for subclasses of QObject

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots: // this is not standard C++ syntax
    // Qt makes this work by providing its own
    // preprocessor, which is why we need the
    // Q_OBJECT macro above
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
