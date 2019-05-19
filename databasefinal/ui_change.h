/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_change
{
public:
    QLabel *label;
    QLineEdit *newpass;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QStringLiteral("change"));
        change->resize(485, 373);
        label = new QLabel(change);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 90, 131, 61));
        newpass = new QLineEdit(change);
        newpass->setObjectName(QStringLiteral("newpass"));
        newpass->setGeometry(QRect(170, 110, 211, 31));
        newpass->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(change);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 250, 191, 61));
        label_2 = new QLabel(change);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 131, 61));

        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QDialog *change)
    {
        change->setWindowTitle(QApplication::translate("change", "Dialog", nullptr));
        label->setText(QApplication::translate("change", "new password :", nullptr));
        pushButton->setText(QApplication::translate("change", "accept", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
