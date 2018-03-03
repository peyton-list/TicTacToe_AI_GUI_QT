#ifndef O_H
#define O_H

#include <QDialog>
#include "board.h"

namespace Ui {
class O;
}

class O : public QDialog
{
    Q_OBJECT

public:
    explicit O(QWidget *parent = 0);
    ~O();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::O *ui;
    Board *ob;
};

#endif // O_H
