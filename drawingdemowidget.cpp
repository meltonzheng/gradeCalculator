#include "drawingdemowidget.h"

DrawingDemoWidget::DrawingDemoWidget(QWidget *parent) : QWidget(parent)
{

}
void DrawingDemoWidget::receiveValue(int i)
{
    score = i;
}
