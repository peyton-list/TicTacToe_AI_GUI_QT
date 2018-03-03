#include "board.h"
#include "global.h"
#include "ui_board.h"
#include <QPainter>
#include <QColor>
#include<QString>

bool isHumansTurn;


QRect boardRects[9];

Board::Board(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Board)
{
    ui->setupUi(this);
    this->setWindowTitle("Tic Tac Toe");
    this->setFixedSize(400, 400);
    /*
      ui->pushButton->clicked();
    ui->pushButton_5->clicked();
    ui->pushButton_9->clicked();
    ui->pushButton_3->clicked();
    */


    QPushButton *btn_array[10];
    btn_array[0] = ui->pushButton_0_0;
    btn_array[1] = ui->pushButton_0_1;
    btn_array[2] = ui->pushButton_0_2;
    btn_array[3] = ui->pushButton_1_0;
    btn_array[4] = ui->pushButton_1_1;
    btn_array[5] = ui->pushButton_1_2;
    btn_array[6] = ui->pushButton_2_0;
    btn_array[7] = ui->pushButton_2_1;
    btn_array[8] = ui->pushButton_2_2;

    QFont font = ui->pushButton_0_0->font();
    font.setPointSize(46);
    font.setBold(true);


    for(int i = 0; i<9; ++i){

        connect(btn_array[i], SIGNAL(clicked()), SLOT(kBtnHandler()));

        btn_array[i]->setFont(font);
        btn_array[i]->setFlat(true);
       // btn_array[i]->setStyleSheet("color: rgb(242, 235, 211)");
    }


    if(isHumanFirst)
        isHumansTurn = true;

}

Board::~Board()
{
    delete ui;
}

void Board::paintEvent(QPaintEvent *e)
{
        QSize size(133.33+5 , 133.33+5);
        boardRects[0] = QRect(QPoint(-5, -5), size);
        boardRects[1] = QRect(QPoint(0-5, 133.33-5), size);
        boardRects[2] = QRect(QPoint(0-5, 133.33+133.33-5), size);
        boardRects[3] = QRect(QPoint(133.33-5, 0-5), size);
        boardRects[4] = QRect(QPoint(133.33-5, 133.33-5), size);
        boardRects[5] = QRect(QPoint(133.33-5, 133.33+133.33-5), size);
        boardRects[6] = QRect(QPoint(133.33+133.33-5, 0-5), size);
        boardRects[7] = QRect(QPoint(133.33+133.33-5, 133.33-5), size);
        boardRects[8] = QRect(QPoint(133.33+133.33-5, 133.33+133.33-5), size);
        painter = new QPainter(this);
        painter->fillRect(this->rect(), QColor(20,189,172));
        QPen borderPen(QColor(13,161,146));
        borderPen.setWidth(5);
        painter->setPen(borderPen);
        painter->drawRects(boardRects, 9);
        delete painter;
        QWidget::paintEvent(e);
}

void Board::kBtnHandler()
{
    QString propValue = isHumansTurn?humanProp:computerProp;

    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if(isHumansTurn){
        button->setStyleSheet("color: rgb(242, 235, 211)");
     }
    else{
        button->setStyleSheet("color: rgb(84, 84, 84)");
     }

    button->setText(propValue);
    button->setEnabled(false);

    isHumansTurn = !isHumansTurn;
}


/*
void Board::Tie()
{
    QMessageBox tie;
    tie.setWindowTitle("Result");
    tie.setText("Tie");
    tie.setFixedSize(400, 400);
    tie.exec();
    Reset();
}
*/

/*
void Board::Lose()
{
    QMessageBox lose;
    lose.setWindowTitle("Result");
    lose.setText("You lose");
    lose.setFixedSize(400, 400);
    lose.exec();
    Reset();
}
*/

/*
void Game::Win()
{
    QMessageBox win;
    win.setWindowTitle("Result");
    win.setText("You win");
    win.setFixedSize(400, 400);
    win.exec();
    Reset();
}
*/

/*
  Only Reset function is left
*/
