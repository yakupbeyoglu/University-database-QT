/********************************************************************************
** Form generated from reading UI file 'instructor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTOR_H
#define UI_INSTRUCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_instructor
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *no;
    QLabel *no_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QGroupBox *groupBox;
    QLabel *label_no;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_ad;
    QLabel *salary;
    QLabel *label_bolum;
    QLabel *no2;
    QPushButton *pushButton_9;
    QWidget *page_3;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_10;
    QWidget *page_4;
    QPushButton *pushButton_11;
    QComboBox *scourse;
    QTableWidget *tableWidget_3;

    void setupUi(QWidget *instructor)
    {
        if (instructor->objectName().isEmpty())
            instructor->setObjectName(QStringLiteral("instructor"));
        instructor->resize(1169, 600);
        stackedWidget = new QStackedWidget(instructor);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 1131, 571));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 20, 171, 121));
        no = new QLabel(page);
        no->setObjectName(QStringLiteral("no"));
        no->setGeometry(QRect(60, 20, 121, 41));
        QFont font;
        font.setPointSize(10);
        no->setFont(font);
        no_2 = new QLabel(page);
        no_2->setObjectName(QStringLiteral("no_2"));
        no_2->setGeometry(QRect(190, 30, 291, 21));
        no_2->setFont(font);
        pushButton_7 = new QPushButton(page);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 100, 181, 91));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 100, 211, 91));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 220, 211, 91));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 901, 501));
        label_no = new QLabel(groupBox);
        label_no->setObjectName(QStringLiteral("label_no"));
        label_no->setGeometry(QRect(200, 190, 371, 31));
        QFont font1;
        font1.setPointSize(12);
        label_no->setFont(font1);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 290, 120, 24));
        label_8->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 120, 86));
        label_2->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 230, 131, 41));
        label_5->setFont(font1);
        label_ad = new QLabel(groupBox);
        label_ad->setObjectName(QStringLiteral("label_ad"));
        label_ad->setGeometry(QRect(200, 140, 281, 16));
        label_ad->setFont(font1);
        salary = new QLabel(groupBox);
        salary->setObjectName(QStringLiteral("salary"));
        salary->setGeometry(QRect(200, 290, 501, 20));
        salary->setFont(font1);
        label_bolum = new QLabel(groupBox);
        label_bolum->setObjectName(QStringLiteral("label_bolum"));
        label_bolum->setGeometry(QRect(200, 230, 521, 41));
        label_bolum->setFont(font1);
        no2 = new QLabel(groupBox);
        no2->setObjectName(QStringLiteral("no2"));
        no2->setGeometry(QRect(50, 160, 141, 86));
        no2->setFont(font1);
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(610, 110, 121, 61));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 10, 861, 481));
        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 40, 831, 411));
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(910, 20, 81, 51));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_11 = new QPushButton(page_4);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(880, 40, 81, 51));
        scourse = new QComboBox(page_4);
        scourse->setObjectName(QStringLiteral("scourse"));
        scourse->setGeometry(QRect(120, 40, 171, 31));
        tableWidget_3 = new QTableWidget(page_4);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(70, 130, 881, 431));
        stackedWidget->addWidget(page_4);

        retranslateUi(instructor);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(instructor);
    } // setupUi

    void retranslateUi(QWidget *instructor)
    {
        instructor->setWindowTitle(QApplication::translate("instructor", "Form", nullptr));
        pushButton->setText(QApplication::translate("instructor", "logout", nullptr));
        no->setText(QApplication::translate("instructor", "Instructor id :", nullptr));
        no_2->setText(QString());
        pushButton_7->setText(QApplication::translate("instructor", " INFORMATION", nullptr));
        pushButton_2->setText(QApplication::translate("instructor", "Courses", nullptr));
        pushButton_3->setText(QApplication::translate("instructor", "Registred courses", nullptr));
        groupBox->setTitle(QApplication::translate("instructor", "Instructor information ", nullptr));
        label_no->setText(QApplication::translate("instructor", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("instructor", "Salary : ", nullptr));
        label_2->setText(QApplication::translate("instructor", "NAME :", nullptr));
        label_5->setText(QApplication::translate("instructor", "Department :", nullptr));
        label_ad->setText(QApplication::translate("instructor", "TextLabel", nullptr));
        salary->setText(QApplication::translate("instructor", "TextLabel", nullptr));
        label_bolum->setText(QApplication::translate("instructor", "TextLabel", nullptr));
        no2->setText(QApplication::translate("instructor", "Instructor no :", nullptr));
        pushButton_9->setText(QApplication::translate("instructor", "back", nullptr));
        groupBox_2->setTitle(QApplication::translate("instructor", "Courses", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("instructor", "COURSE ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("instructor", "SECTION ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("instructor", "SEMESTER", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("instructor", "YEAR", nullptr));
        pushButton_10->setText(QApplication::translate("instructor", "back", nullptr));
        pushButton_11->setText(QApplication::translate("instructor", "back", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("instructor", "STUDENT ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("instructor", "STUDENT NAME", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("instructor", "STUDENT DEPART", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("instructor", "STUDENT CGPA", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("instructor", "STUDENT GRADE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instructor: public Ui_instructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTOR_H
