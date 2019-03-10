#ifndef BALL_H
#define BALL_H

#include "coordinate.h"
#include <QPainter>

class Ball
{

public:
    Ball(Coordinate coordinate,
        unsigned int radius = 10,
        double gravity = -9.8,
        double xVelocity = 10.0,
         double yVelocity = 10.0)
        :m_coordinate(coordinate),
          m_radius(radius),
          m_gravity(gravity),
          m_xVelocity(xVelocity),
          m_yVelocity(yVelocity)
    {}

    ~Ball(){}

    void render(QPainter &painter, unsigned int time){
        if (isCollision()) {
            m_coordinate.setYCoordinateToZero(this->getRadius());
            // velocity decreases after hitting the ground
            m_yVelocity *= -0.8;

            // friction on the ground
            if (m_xVelocity > 0) {
                m_xVelocity -= 0.1;
            }
            else {
               // need to make sure the ball doesn't go backwards
               m_xVelocity = 0;
            }
        }

        painter.setPen ( Qt::black );
        painter.setBrush( QBrush( Qt::yellow ) );
        painter.drawEllipse(m_coordinate.getQtRenderingXCoordinate() - (int) m_radius,
            m_coordinate.getQtRenderingYCoordinate() -(int) m_radius,
            m_radius * 2,
            m_radius * 2);
        m_yVelocity += m_gravity / 32.0;
        m_coordinate.changeInXCoordinate(m_xVelocity);
        m_coordinate.changeInYCoordinate(m_yVelocity);
    }

    bool isCollision(){
        return m_coordinate.getQtRenderingYCoordinate() >
            (signed int) (m_coordinate.getFrameHeight() - (signed int) m_radius);
    }

    unsigned int getRadius(){
        return m_radius;
    }

private:
    Coordinate m_coordinate;
    unsigned int m_radius;
    double m_gravity;
    double m_xVelocity;
    double m_yVelocity;
};

#endif // BALL_H
