#ifndef DRAWINGDEMOWIDGET_H
#define DRAWINGDEMOWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class DrawingDemoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DrawingDemoWidget(QWidget *parent = nullptr);

    void receiveValue(int i);

    // paintEvent is called anytime any part of your widget needs to be repainted
    // when the window is moved (probably)
    // when the window is resized
    // when the widget is obscured
    // when the window is obscured (minimized, covered by another window) (might be OS dependent)
    // when a repaint is triggered by the program manually using either
    // update() // schedules a repaint when convenient, can also combine calls, which is usually better
    // repaint() // forces immediate repaint, maybe check the docs
    // QPaintEvent tells you what rectangle you need to repaint
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this); // widgets are paintable, and therefore valid arguments to construct a QPainter

        // now I know I should have a 500x500 rectangle to paint in, because I implemented sizeHint/minimumSizeHint

        painter.setBrush(Qt::red); // global colors are in Qt:: namespace
        QPen pen(Qt::black, 20.0f, Qt::DashLine);
        painter.setPen(pen);

    }

    QSize sizeHint() const override {
        return minimumSizeHint();
    }

    QSize minimumSizeHint() const override {
        return QSize(250,250);
    }
private:
    int score;
};

#endif // DRAWINGDEMOWIDGET_H
