#ifndef X_H
#define X_H

#include <QDialog>
#include "board.h"

namespace Ui {
class X;
}

class X : public QDialog
{
    Q_OBJECT

public:
    explicit X(QWidget *parent = 0);
    ~X();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::X *ui;
    Board *xb;
};

#endif // X_H
