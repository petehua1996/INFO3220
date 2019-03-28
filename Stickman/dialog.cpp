#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),
    stickman(),
    clouds()
{
    ui->setupUi(this);
    this->resize(1000, 600);

    QPixmap bkgnd(":/img/img/FlyingPaint.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    clouds.push_back(Cloud(30,100,20,1000));
    clouds.push_back(Cloud(300,200,20,1000));
    clouds.push_back(Cloud(400,400,20,1000));
    clouds.push_back(Cloud(200,300,20,1000));
    clouds.push_back(Cloud(400,300,20,1000));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(nextFrame()));
    timer->start(32);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::nextFrame()
{
    update();
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    stickman.render(painter);
    for(std::vector<Cloud>::iterator it = clouds.begin() ; it != clouds.end(); ++it){
        it->render(painter);
    }
}
