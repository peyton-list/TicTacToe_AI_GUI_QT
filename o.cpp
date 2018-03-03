#include "o.h"
#include "ui_o.h"
#include "global.h"
#include <QTime>


int flag;
int role;

bool isHumanFirst = false;

O::O(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::O)
{
    ui->setupUi(this);
    // Set window title and fixed size
    this->setWindowTitle("Tic Tac Toe");
    this->setFixedSize(400, 400);
    // Set window color
    this->setStyleSheet("background-color:rgb(20,189,172);");
    this->show();
}

O::~O()
{
    delete ui;
}

void O::on_pushButton_clicked()
{


    isHumanFirst = true;

    hide();
    ob=new Board(this);
    ob->show();

}

void O::on_pushButton_2_clicked()
{

    hide();
    ob=new Board(this);
    ob->show();

}

void O::on_pushButton_3_clicked()
{

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    int high = 1000,low = 0;
    int rnd_value = qrand() % ((high + 1) - low) + low;

    if(rnd_value&1)
        isHumanFirst = true;

    hide();
    ob=new Board(this);
    ob->show();

}
