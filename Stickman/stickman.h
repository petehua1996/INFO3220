#ifndef STICKMAN_H
#define STICKMAN_H

#include <QPixmap>
#include <QPainter>

class  Stickman {
public:
    Stickman(): stickman(":/img/img/stickman.png"){}

    ~Stickman(){}

    void render(QPainter & painter){
        painter.drawPixmap(100,400,200,200,stickman);
    }

private:
    QPixmap stickman;
};

#endif // STICKMAN_H
