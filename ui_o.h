/********************************************************************************
** Form generated from reading UI file 'o.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_O_H
#define UI_O_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_O
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *O)
    {
        if (O->objectName().isEmpty())
            O->setObjectName(QStringLiteral("O"));
        O->resize(400, 300);
        pushButton_3 = new QPushButton(O);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 230, 131, 61));
        QFont font;
        font.setFamily(QStringLiteral("DigifaceWide"));
        font.setPointSize(16);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton_3:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));
        pushButton = new QPushButton(O);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 70, 131, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("DigifaceWide"));
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));
        label = new QLabel(O);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 381, 41));
        label->setFont(font);
        pushButton_2 = new QPushButton(O);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 150, 131, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton_2:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));

        retranslateUi(O);

        QMetaObject::connectSlotsByName(O);
    } // setupUi

    void retranslateUi(QDialog *O)
    {
        O->setWindowTitle(QApplication::translate("O", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("O", "Random", nullptr));
        pushButton->setText(QApplication::translate("O", "Human", nullptr));
        label->setText(QApplication::translate("O", "Who will take 1st turn ?", nullptr));
        pushButton_2->setText(QApplication::translate("O", "Computer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class O: public Ui_O {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_O_H
