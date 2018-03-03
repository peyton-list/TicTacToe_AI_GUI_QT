/********************************************************************************
** Form generated from reading UI file 'x.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X_H
#define UI_X_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_X
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QDialog *X)
    {
        if (X->objectName().isEmpty())
            X->setObjectName(QStringLiteral("X"));
        X->resize(400, 300);
        pushButton = new QPushButton(X);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 70, 131, 61));
        QFont font;
        font.setFamily(QStringLiteral("DigifaceWide"));
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));
        pushButton_2 = new QPushButton(X);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 150, 131, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("DigifaceWide"));
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton_2:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));
        label = new QLabel(X);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 381, 41));
        label->setFont(font);
        pushButton_3 = new QPushButton(X);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 230, 131, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton_3:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));

        retranslateUi(X);

        QMetaObject::connectSlotsByName(X);
    } // setupUi

    void retranslateUi(QDialog *X)
    {
        X->setWindowTitle(QApplication::translate("X", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("X", "Human", nullptr));
        pushButton_2->setText(QApplication::translate("X", "Computer", nullptr));
        label->setText(QApplication::translate("X", "Who will take 1st turn ?", nullptr));
        pushButton_3->setText(QApplication::translate("X", "Random", nullptr));
    } // retranslateUi

};

namespace Ui {
    class X: public Ui_X {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X_H
