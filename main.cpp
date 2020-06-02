#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // responsible for managing the execution and exiting of the Qt Program
    MainWindow w;
    w.show();
    return a.exec(); // this controls exiting of the program. a.exec() doesn't return control to main until the QApplication
    // decides it's time to close
}
