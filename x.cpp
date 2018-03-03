#include "x.h"
#include "ui_x.h"
#include "global.h"

X::X(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::X)
{
    ui->setupUi(this);
    // Set window title and fixed size
    this->setWindowTitle("Tic Tac Toe");
    this->setFixedSize(400, 400);
    // Set window color
    this->setStyleSheet("background-color:rgb(20,189,172);");
    this->show();
}

X::~X()
{
    delete ui;
}

void X::on_pushButton_clicked()
{

    hide();
    xb=new Board(this);
    xb->show();

}

void X::on_pushButton_2_clicked()
{

    hide();
    xb=new Board(this);
    xb->show();

}

void X::on_pushButton_3_clicked()
{

    hide();
    xb=new Board(this);
    xb->show();

}
