/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QPushButton *pushButton;
    QLabel *no_2;
    QLabel *no;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_12;
    QWidget *page_5;
    QGroupBox *groupBox;
    QLabel *label_bolum;
    QLabel *label_no;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_ad;
    QLabel *no2;
    QLabel *label_8;
    QLabel *cgpa;
    QPushButton *pushButton_9;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *page;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QWidget *page_6;
    QPushButton *pushButton_11;
    QTableWidget *tableWidget_3;
    QComboBox *scourse;
    QLabel *label;

    void setupUi(QWidget *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName(QStringLiteral("student"));
        student->resize(1085, 600);
        stackedWidget = new QStackedWidget(student);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 1071, 600));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(870, 10, 121, 111));
        no_2 = new QLabel(page_3);
        no_2->setObjectName(QStringLiteral("no_2"));
        no_2->setGeometry(QRect(120, 20, 291, 21));
        QFont font;
        font.setPointSize(10);
        no_2->setFont(font);
        no = new QLabel(page_3);
        no->setObjectName(QStringLiteral("no"));
        no->setGeometry(QRect(10, 10, 121, 41));
        no->setFont(font);
        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 110, 181, 91));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 110, 181, 91));
        pushButton_8->setStyleSheet(QLatin1String("\n"
"font: 8pt \"MS Serif\";"));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(510, 110, 181, 91));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox = new QGroupBox(page_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 931, 521));
        label_bolum = new QLabel(groupBox);
        label_bolum->setObjectName(QStringLiteral("label_bolum"));
        label_bolum->setGeometry(QRect(180, 210, 521, 41));
        QFont font1;
        font1.setPointSize(12);
        label_bolum->setFont(font1);
        label_no = new QLabel(groupBox);
        label_no->setObjectName(QStringLiteral("label_no"));
        label_no->setGeometry(QRect(200, 165, 371, 21));
        label_no->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 40, 120, 86));
        label_2->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 220, 120, 24));
        label_5->setFont(font1);
        label_ad = new QLabel(groupBox);
        label_ad->setObjectName(QStringLiteral("label_ad"));
        label_ad->setGeometry(QRect(220, 80, 281, 16));
        label_ad->setFont(font1);
        no2 = new QLabel(groupBox);
        no2->setObjectName(QStringLiteral("no2"));
        no2->setGeometry(QRect(50, 130, 120, 86));
        no2->setFont(font1);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 270, 120, 24));
        label_8->setFont(font1);
        cgpa = new QLabel(groupBox);
        cgpa->setObjectName(QStringLiteral("cgpa"));
        cgpa->setGeometry(QRect(160, 270, 501, 20));
        cgpa->setFont(font1);
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(610, 50, 121, 61));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 80, 122, 88));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton_10 = new QPushButton(page);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(900, 0, 81, 51));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 0, 841, 561));
        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 90, 801, 391));
        stackedWidget->addWidget(page);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        pushButton_11 = new QPushButton(page_6);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(880, 30, 81, 51));
        tableWidget_3 = new QTableWidget(page_6);
        if (tableWidget_3->columnCount() < 8)
            tableWidget_3->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(20, 160, 1011, 261));
        scourse = new QComboBox(page_6);
        scourse->setObjectName(QStringLiteral("scourse"));
        scourse->setGeometry(QRect(120, 30, 171, 31));
        label = new QLabel(page_6);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 81, 31));
        stackedWidget->addWidget(page_6);

        retranslateUi(student);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QWidget *student)
    {
        student->setWindowTitle(QApplication::translate("student", "Form", nullptr));
        pushButton->setText(QApplication::translate("student", "logout", nullptr));
        no_2->setText(QApplication::translate("student", "TextLabel", nullptr));
        no->setText(QApplication::translate("student", "Student no :", nullptr));
        pushButton_7->setText(QApplication::translate("student", " INFORMATION", nullptr));
#ifndef QT_NO_WHATSTHIS
        pushButton_8->setWhatsThis(QApplication::translate("student", "<html><head/><body><p>kl</p><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButton_8->setText(QApplication::translate("student", "Selected Courses", nullptr));
        pushButton_12->setText(QApplication::translate("student", "Course Details", nullptr));
        groupBox->setTitle(QApplication::translate("student", "Student Information ", nullptr));
        label_bolum->setText(QApplication::translate("student", "TextLabel", nullptr));
        label_no->setText(QApplication::translate("student", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("student", "NAME :", nullptr));
        label_5->setText(QApplication::translate("student", "Department :", nullptr));
        label_ad->setText(QApplication::translate("student", "TextLabel", nullptr));
        no2->setText(QApplication::translate("student", "student No :", nullptr));
        label_8->setText(QApplication::translate("student", "CGPA :", nullptr));
        cgpa->setText(QApplication::translate("student", "TextLabel", nullptr));
        pushButton_9->setText(QApplication::translate("student", "back", nullptr));
        pushButton_10->setText(QApplication::translate("student", "back", nullptr));
        groupBox_2->setTitle(QApplication::translate("student", "Courses", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("student", "COURSE ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("student", "SECTION ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("student", "SEMESTER", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("student", "YEAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("student", "GRADE", nullptr));
        pushButton_11->setText(QApplication::translate("student", "back", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("student", "COURSE ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("student", "SECTION ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("student", "SEMESTER", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("student", "YEAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("student", "BUILDING", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("student", "ROOM NO", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("student", "Time Slot Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("student", "CREDIT", nullptr));
        label->setText(QApplication::translate("student", "Courses :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
