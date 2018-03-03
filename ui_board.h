/********************************************************************************
** Form generated from reading UI file 'board.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Board
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_0_0;
    QPushButton *pushButton_2_0;
    QPushButton *pushButton_0_1;
    QPushButton *pushButton_0_2;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_0;
    QPushButton *pushButton_1_2;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Board)
    {
        if (Board->objectName().isEmpty())
            Board->setObjectName(QStringLiteral("Board"));
        Board->resize(400, 400);
        centralwidget = new QWidget(Board);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_0_0 = new QPushButton(centralwidget);
        pushButton_0_0->setObjectName(QStringLiteral("pushButton_0_0"));
        pushButton_0_0->setGeometry(QRect(10, 10, 111, 111));
        pushButton_0_0->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_0_0->setIconSize(QSize(130, 130));
        pushButton_2_0 = new QPushButton(centralwidget);
        pushButton_2_0->setObjectName(QStringLiteral("pushButton_2_0"));
        pushButton_2_0->setGeometry(QRect(10, 270, 111, 111));
        pushButton_2_0->setStyleSheet(QLatin1String("#pushButton_7\n"
"{\n"
"\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_2_0->setIconSize(QSize(130, 130));
        pushButton_0_1 = new QPushButton(centralwidget);
        pushButton_0_1->setObjectName(QStringLiteral("pushButton_0_1"));
        pushButton_0_1->setGeometry(QRect(140, 10, 111, 111));
        pushButton_0_1->setStyleSheet(QLatin1String("#pushButton_2\n"
"{\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_0_1->setIconSize(QSize(130, 130));
        pushButton_0_2 = new QPushButton(centralwidget);
        pushButton_0_2->setObjectName(QStringLiteral("pushButton_0_2"));
        pushButton_0_2->setGeometry(QRect(270, 10, 111, 111));
        pushButton_0_2->setStyleSheet(QLatin1String("#pushButton_3\n"
"{\n"
"\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_0_2->setIconSize(QSize(130, 130));
        pushButton_1_1 = new QPushButton(centralwidget);
        pushButton_1_1->setObjectName(QStringLiteral("pushButton_1_1"));
        pushButton_1_1->setGeometry(QRect(140, 140, 111, 111));
        pushButton_1_1->setStyleSheet(QLatin1String("#pushButton_5\n"
"{\n"
"\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_1_1->setIconSize(QSize(130, 130));
        pushButton_2_2 = new QPushButton(centralwidget);
        pushButton_2_2->setObjectName(QStringLiteral("pushButton_2_2"));
        pushButton_2_2->setGeometry(QRect(270, 270, 111, 111));
        pushButton_2_2->setStyleSheet(QLatin1String("#pushButton_9\n"
"{\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_2_2->setIconSize(QSize(130, 130));
        pushButton_2_1 = new QPushButton(centralwidget);
        pushButton_2_1->setObjectName(QStringLiteral("pushButton_2_1"));
        pushButton_2_1->setGeometry(QRect(140, 270, 111, 111));
        pushButton_2_1->setStyleSheet(QLatin1String("#pushButton_8\n"
"{\n"
"\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"}"));
        pushButton_2_1->setIconSize(QSize(130, 130));
        pushButton_1_0 = new QPushButton(centralwidget);
        pushButton_1_0->setObjectName(QStringLiteral("pushButton_1_0"));
        pushButton_1_0->setGeometry(QRect(10, 140, 111, 111));
        pushButton_1_0->setStyleSheet(QLatin1String("#pushButton_4\n"
"{\n"
"\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"\n"
"}"));
        pushButton_1_0->setIconSize(QSize(130, 130));
        pushButton_1_2 = new QPushButton(centralwidget);
        pushButton_1_2->setObjectName(QStringLiteral("pushButton_1_2"));
        pushButton_1_2->setGeometry(QRect(270, 140, 111, 111));
        pushButton_1_2->setStyleSheet(QLatin1String("#pushButton_6\n"
"{\n"
"\n"
"/*\n"
"background-color: rgb(20,189,172);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-color: beige;\n"
"*/\n"
"}"));
        pushButton_1_2->setIconSize(QSize(130, 130));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 10, 20, 371));
        line_2->setLayoutDirection(Qt::LeftToRight);
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(8, 167, 149);"));
        line_2->setLineWidth(0);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 120, 381, 20));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(8, 167, 149);"));
        line_3->setLineWidth(0);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 250, 381, 20));
        line_4->setBaseSize(QSize(0, 0));
        line_4->setAutoFillBackground(false);
        line_4->setStyleSheet(QStringLiteral("background-color: rgb(8, 167, 149);"));
        line_4->setLineWidth(0);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(120, 10, 20, 371));
        line_5->setLayoutDirection(Qt::LeftToRight);
        line_5->setStyleSheet(QStringLiteral("background-color: rgb(8, 167, 149);"));
        line_5->setLineWidth(0);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        Board->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Board);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        Board->setMenuBar(menubar);
        statusbar = new QStatusBar(Board);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Board->setStatusBar(statusbar);

        retranslateUi(Board);

        QMetaObject::connectSlotsByName(Board);
    } // setupUi

    void retranslateUi(QMainWindow *Board)
    {
        Board->setWindowTitle(QApplication::translate("Board", "MainWindow", nullptr));
        pushButton_0_0->setText(QString());
        pushButton_2_0->setText(QString());
        pushButton_0_1->setText(QString());
        pushButton_0_2->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_2_2->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_1_0->setText(QString());
        pushButton_1_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Board: public Ui_Board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
