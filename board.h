#ifndef BOARD_H
#define BOARD_H

#include <QMainWindow>

namespace Ui {
class Board;
}

class Board : public QMainWindow
{
    Q_OBJECT

public:
    explicit Board(QWidget *parent = 0);
    ~Board();

private slots:

    void kBtnHandler();

private:
    Ui::Board *ui;
    void paintEvent(QPaintEvent *e);
    QPainter *painter;
};

#endif // BOARD_H
