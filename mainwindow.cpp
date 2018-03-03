#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Set window title and fixed size
    this->setWindowTitle("Tic Tac Toe");
    this->setFixedSize(400, 400);
    // Set window color
    this->setStyleSheet("background-color:rgb(20,189,172);");
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    dialog=new Dialog(this);
    dialog->show();
}
