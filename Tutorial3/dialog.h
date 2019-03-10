#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QTimer>

#include "ball.h"
#include "coordinate.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void nextFrame();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::Dialog *ui;
    Ball m_ball;
    int m_counter;
};

#endif // DIALOG_H
