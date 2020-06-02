#ifndef RECEIVER_H
#define RECEIVER_H

#include <QWidget>
#include <cmath>

class Receiver: public QWidget
{
     Q_OBJECT
public:
    explicit Receiver(QWidget *parent = nullptr);
    double recalculate();

public slots:
    void receiveValueHW1(int);
    void receiveValueHW2(int);
    void receiveValueHW3(int);
    void receiveValueHW4(int);
    void receiveValueHW5(int);
    void receiveValueHW6(int);
    void receiveValueHW7(int);
    void receiveValueHW8(int);
    void receiveValueMID1(int);
    void receiveValueMID2(int);
    void receiveValueFIN(int);

signals:
    void signalValue(double);
    void signalValueHW2(int);
    void signalValueHW3(int);
    void signalValueHW4(int);
    void signalValueHW5(int);
    void signalValueHW6(int);
    void signalValueHW7(int);
    void signalValueHW8(int);
    void signalValueMID1(int);
    void signalValueMID2(int);
    void signalValueFIN(int);


private:
    int scoreHW1=0;
    int scoreHW2=0;
    int scoreHW3=0;
    int scoreHW4=0;
    int scoreHW5=0;
    int scoreHW6=0;
    int scoreHW7=0;
    int scoreHW8=0;
    int scoreMID1=0;
    int scoreMID2=0;
    int scoreFIN=0;

    double score;

};

#endif // RECEIVER_H
