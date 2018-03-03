#include "dialog.h"
#include "ui_dialog.h"

QString humanProp,computerProp;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // Set window title and fixed size
    this->setWindowTitle("Tic Tac Toe");
    this->setFixedSize(400, 400);
    // Set window color
    this->setStyleSheet("background-color:rgb(20,189,172);");
    this->show();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    humanProp = "X";
    computerProp = "O";

    hide();
    o=new O(this);
    o->show();
}

void Dialog::on_pushButton_2_clicked()
{
    humanProp = "O";
    computerProp = "X";

    hide();

    o = new O(this);
    o->show();

   // o=new O(this);
//    o->show();
}
