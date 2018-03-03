/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(64, 140, 101, 91));
        QFont font;
        font.setFamily(QStringLiteral("DigifaceWide"));
        font.setPointSize(48);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 140, 101, 91));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2\n"
"{\n"
"background-color: rgb(242, 235, 211);\n"
"}\n"
"#pushButton_2:hover\n"
"{\n"
"background-color: #d9d3bd;\n"
"}"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 40, 401, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("DigifaceWide"));
        font1.setPointSize(26);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "X", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "O", nullptr));
        label->setText(QApplication::translate("Dialog", "Select Props", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
