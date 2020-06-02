#include "receiver.h"
#include <iostream>

Receiver::Receiver(QWidget *parent) : QWidget(parent)
{
}
void Receiver::receiveValueHW1(int i)
{
    if(scoreHW1 != i){
        scoreHW1 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW2(int i){
    if(scoreHW2 != i){
        scoreHW2 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW3(int i){
    if(scoreHW3 != i){
        scoreHW3 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW4(int i){
    if(scoreHW4 != i){
        scoreHW4 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW5(int i){
    if(scoreHW5 != i){
        scoreHW5 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW6(int i){
    if(scoreHW6 != i){
        scoreHW6 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW7(int i){
    if(scoreHW7 != i){
        scoreHW7 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueHW8(int i){
    if(scoreHW8 != i){
        scoreHW8 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueMID1(int i){
    if(scoreMID1 != i){
        scoreMID1 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueMID2(int i){
    if(scoreMID2 != i){
        scoreMID2 = i;
        double t = this->recalculate();
        emit signalValue(t);
        //emit two signals? or maybe emit calculated value?
    }
}
void Receiver::receiveValueFIN(int i){
    if(scoreFIN != i){
        scoreFIN = i;
        double t = this->recalculate();
        emit signalValue(t);

    }
}
double Receiver::recalculate()
{
    double temp1 = ((scoreHW1 + scoreHW2 + scoreHW3 + scoreHW4 + scoreHW5    + scoreHW6    + scoreHW7 + scoreHW8) / 800. * 25.) + (scoreMID1) / 100. * 20. + (scoreMID2) / 100. * 20. + (scoreFIN) / 100. * 35.;
    double temp2 = (scoreHW1 + scoreHW2 + scoreHW3 + scoreHW4 + scoreHW5    + scoreHW6    + scoreHW7 + scoreHW8) / 800. * 25. + fmax(scoreMID1,scoreMID2) / 100. * 30. + (scoreFIN) / 100. * 44.;
    score = fmax(temp1,temp2);
    return score;
}
