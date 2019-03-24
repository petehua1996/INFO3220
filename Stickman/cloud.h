#ifndef COULD_H
#define COULD_H

#include <QPixmap>
#include <QPainter>

class Cloud{
public:
    Cloud(double x, double y, double velocity, double width):
        x(x),
        y(y),
        width(width),
        velocity(velocity){}

    ~Cloud(){}

    void render(QPainter & painter){
        if(x<0){
            x = width-20;
        }
        painter.setPen(Qt::black);
        painter.setBrush(Qt::yellow);
        painter.drawRect(x,y,40,20);
        x-=velocity*0.1;
    }

private:
    double x;
    double y;
    double width;
    double velocity;
};

#endif // COULD_H
