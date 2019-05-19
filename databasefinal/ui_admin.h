/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *adminid;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_15;
    QWidget *page_7;
    QGroupBox *groupBox_4;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *a_sid;
    QComboBox *a_cid;
    QComboBox *a_year;
    QComboBox *a_semester;
    QComboBox *a_secid;
    QComboBox *a_grade;
    QWidget *page_6;
    QPushButton *rbutton;
    QPushButton *back_button;
    QGroupBox *groupBox_11;
    QLineEdit *c_credit;
    QLabel *label_2;
    QLabel *label_14;
    QLabel *label_21;
    QLabel *label_12;
    QLineEdit *c_tittle;
    QComboBox *c_dept;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *c_id;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_16;
    QLineEdit *c_roomno_2;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_71;
    QLabel *label_72;
    QLineEdit *c_building_2;
    QLabel *label_73;
    QLineEdit *s_year_2;
    QLabel *label_88;
    QLineEdit *sec_id;
    QComboBox *s_semester_2;
    QComboBox *s_timeslotid;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_4;
    QPushButton *pushButton_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *std_cgpa;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *std_name;
    QComboBox *departments;
    QPushButton *pushButton_7;
    QLabel *depart;
    QPushButton *pushButton_3;
    QWidget *page_5;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *ins_salary;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *ins_name;
    QComboBox *departments_2;
    QPushButton *pushButton_9;
    QLabel *depart_2;
    QPushButton *pushButton_10;
    QWidget *page_8;
    QGroupBox *groupBox_5;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QComboBox *a_cid_3;
    QComboBox *a_year_3;
    QComboBox *a_semester_3;
    QComboBox *a_secid_3;
    QComboBox *a_grade_3;
    QWidget *page_17;
    QGroupBox *groupBox_12;
    QLabel *label_13;
    QComboBox *i_id;
    QLabel *label_22;
    QComboBox *ic_id;
    QLabel *label_55;
    QComboBox *i_year;
    QLabel *label_56;
    QComboBox *i_semester;
    QLabel *label_57;
    QComboBox *i_sec;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_58;
    QLabel *i_name2;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QStringLiteral("admin"));
        admin->resize(1000, 600);
        stackedWidget = new QStackedWidget(admin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-20, 10, 991, 651));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(800, 0, 191, 91));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 171, 51));
        adminid = new QLineEdit(page);
        adminid->setObjectName(QStringLiteral("adminid"));
        adminid->setGeometry(QRect(120, 20, 111, 21));
        adminid->setAcceptDrops(false);
        adminid->setReadOnly(true);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 80, 701, 431));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 20, 211, 81));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(250, 20, 211, 81));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(480, 20, 181, 81));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(30, 120, 211, 91));
        pushButton_15 = new QPushButton(groupBox_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(270, 120, 171, 91));
        stackedWidget->addWidget(page);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_4 = new QGroupBox(page_7);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 10, 951, 541));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 30, 91, 21));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 70, 91, 21));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 190, 91, 21));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 150, 91, 21));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 110, 91, 21));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 230, 91, 21));
        pushButton_13 = new QPushButton(groupBox_4);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(30, 310, 93, 28));
        pushButton_14 = new QPushButton(groupBox_4);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(630, 40, 93, 28));
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 20, 201, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        a_sid = new QComboBox(layoutWidget);
        a_sid->setObjectName(QStringLiteral("a_sid"));

        verticalLayout->addWidget(a_sid);

        a_cid = new QComboBox(layoutWidget);
        a_cid->setObjectName(QStringLiteral("a_cid"));

        verticalLayout->addWidget(a_cid);

        a_year = new QComboBox(layoutWidget);
        a_year->setObjectName(QStringLiteral("a_year"));

        verticalLayout->addWidget(a_year);

        a_semester = new QComboBox(layoutWidget);
        a_semester->setObjectName(QStringLiteral("a_semester"));

        verticalLayout->addWidget(a_semester);

        a_secid = new QComboBox(layoutWidget);
        a_secid->setObjectName(QStringLiteral("a_secid"));

        verticalLayout->addWidget(a_secid);

        a_grade = new QComboBox(layoutWidget);
        a_grade->setObjectName(QStringLiteral("a_grade"));

        verticalLayout->addWidget(a_grade);

        stackedWidget->addWidget(page_7);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        rbutton = new QPushButton(page_6);
        rbutton->setObjectName(QStringLiteral("rbutton"));
        rbutton->setGeometry(QRect(620, 140, 131, 61));
        back_button = new QPushButton(page_6);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(780, 140, 121, 61));
        groupBox_11 = new QGroupBox(page_6);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(50, 20, 541, 181));
        c_credit = new QLineEdit(groupBox_11);
        c_credit->setObjectName(QStringLiteral("c_credit"));
        c_credit->setGeometry(QRect(360, 110, 141, 31));
        label_2 = new QLabel(groupBox_11);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1, 51, 63, 22));
        label_14 = new QLabel(groupBox_11);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(260, 50, 81, 31));
        label_21 = new QLabel(groupBox_11);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(250, 110, 81, 31));
        label_12 = new QLabel(groupBox_11);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(1, 111, 34, 22));
        c_tittle = new QLineEdit(groupBox_11);
        c_tittle->setObjectName(QStringLiteral("c_tittle"));
        c_tittle->setGeometry(QRect(70, 110, 137, 22));
        c_dept = new QComboBox(groupBox_11);
        c_dept->setObjectName(QStringLiteral("c_dept"));
        c_dept->setGeometry(QRect(360, 50, 151, 31));
        layoutWidget1 = new QWidget(groupBox_11);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 51, 139, 53));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        c_id = new QLineEdit(layoutWidget1);
        c_id->setObjectName(QStringLiteral("c_id"));

        verticalLayout_5->addWidget(c_id);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        groupBox_16 = new QGroupBox(page_6);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(50, 210, 521, 371));
        c_roomno_2 = new QLineEdit(groupBox_16);
        c_roomno_2->setObjectName(QStringLiteral("c_roomno_2"));
        c_roomno_2->setGeometry(QRect(100, 200, 161, 31));
        label_69 = new QLabel(groupBox_16);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(250, 30, 71, 41));
        label_70 = new QLabel(groupBox_16);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(10, 50, 61, 21));
        label_71 = new QLabel(groupBox_16);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(10, 140, 81, 31));
        label_72 = new QLabel(groupBox_16);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(20, 90, 61, 31));
        c_building_2 = new QLineEdit(groupBox_16);
        c_building_2->setObjectName(QStringLiteral("c_building_2"));
        c_building_2->setGeometry(QRect(100, 150, 111, 21));
        label_73 = new QLabel(groupBox_16);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(10, 200, 81, 31));
        s_year_2 = new QLineEdit(groupBox_16);
        s_year_2->setObjectName(QStringLiteral("s_year_2"));
        s_year_2->setGeometry(QRect(60, 50, 113, 22));
        label_88 = new QLabel(groupBox_16);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setGeometry(QRect(250, 80, 81, 41));
        sec_id = new QLineEdit(groupBox_16);
        sec_id->setObjectName(QStringLiteral("sec_id"));
        sec_id->setGeometry(QRect(100, 100, 113, 22));
        s_semester_2 = new QComboBox(groupBox_16);
        s_semester_2->setObjectName(QStringLiteral("s_semester_2"));
        s_semester_2->setGeometry(QRect(350, 40, 151, 22));
        s_timeslotid = new QComboBox(groupBox_16);
        s_timeslotid->setObjectName(QStringLiteral("s_timeslotid"));
        s_timeslotid->setGeometry(QRect(350, 90, 151, 22));
        stackedWidget->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(30, 10, 0, 0));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(800, 210, 181, 151));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(790, 30, 191, 91));
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 80, 251, 91));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(660, 50, 93, 28));
        layoutWidget2 = new QWidget(page_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 150, 192, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget3 = new QWidget(page_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 210, 223, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        lineEdit_3 = new QLineEdit(layoutWidget3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        layoutWidget4 = new QWidget(page_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(100, 310, 206, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_4 = new QLineEdit(layoutWidget4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        layoutWidget5 = new QWidget(page_4);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(60, 80, 171, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        lineEdit = new QLineEdit(layoutWidget5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        stackedWidget_2->addWidget(page_4);
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 941, 531));
        QFont font;
        font.setPointSize(9);
        groupBox->setFont(font);
        layoutWidget6 = new QWidget(groupBox);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(30, 120, 279, 81));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        std_cgpa = new QLineEdit(layoutWidget6);
        std_cgpa->setObjectName(QStringLiteral("std_cgpa"));

        horizontalLayout_5->addWidget(std_cgpa);

        layoutWidget7 = new QWidget(groupBox);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(30, 32, 285, 81));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget7);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        std_name = new QLineEdit(layoutWidget7);
        std_name->setObjectName(QStringLiteral("std_name"));

        horizontalLayout_6->addWidget(std_name);

        departments = new QComboBox(groupBox);
        departments->setObjectName(QStringLiteral("departments"));
        departments->setGeometry(QRect(110, 230, 151, 31));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 280, 141, 71));
        depart = new QLabel(groupBox);
        depart->setObjectName(QStringLiteral("depart"));
        depart->setGeometry(QRect(10, 210, 121, 61));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 20, 93, 28));
        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_3 = new QGroupBox(page_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 20, 951, 511));
        groupBox_3->setFont(font);
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 120, 279, 81));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_7->addWidget(label_10);

        ins_salary = new QLineEdit(layoutWidget_2);
        ins_salary->setObjectName(QStringLiteral("ins_salary"));

        horizontalLayout_7->addWidget(ins_salary);

        layoutWidget_3 = new QWidget(groupBox_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 32, 285, 81));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_8->addWidget(label_11);

        ins_name = new QLineEdit(layoutWidget_3);
        ins_name->setObjectName(QStringLiteral("ins_name"));

        horizontalLayout_8->addWidget(ins_name);

        departments_2 = new QComboBox(groupBox_3);
        departments_2->setObjectName(QStringLiteral("departments_2"));
        departments_2->setGeometry(QRect(110, 230, 151, 31));
        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 280, 141, 71));
        depart_2 = new QLabel(groupBox_3);
        depart_2->setObjectName(QStringLiteral("depart_2"));
        depart_2->setGeometry(QRect(10, 210, 121, 61));
        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(770, 20, 121, 41));
        stackedWidget->addWidget(page_5);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_5 = new QGroupBox(page_8);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 0, 991, 561));
        label_28 = new QLabel(groupBox_5);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 40, 91, 21));
        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 190, 91, 21));
        label_30 = new QLabel(groupBox_5);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(0, 130, 91, 21));
        label_31 = new QLabel(groupBox_5);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 80, 91, 21));
        label_32 = new QLabel(groupBox_5);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 230, 91, 21));
        pushButton_18 = new QPushButton(groupBox_5);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(30, 310, 93, 28));
        pushButton_19 = new QPushButton(groupBox_5);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(440, 40, 93, 28));
        layoutWidget_5 = new QWidget(groupBox_5);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(100, 20, 201, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        a_cid_3 = new QComboBox(layoutWidget_5);
        a_cid_3->setObjectName(QStringLiteral("a_cid_3"));

        verticalLayout_3->addWidget(a_cid_3);

        a_year_3 = new QComboBox(layoutWidget_5);
        a_year_3->setObjectName(QStringLiteral("a_year_3"));

        verticalLayout_3->addWidget(a_year_3);

        a_semester_3 = new QComboBox(layoutWidget_5);
        a_semester_3->setObjectName(QStringLiteral("a_semester_3"));

        verticalLayout_3->addWidget(a_semester_3);

        a_secid_3 = new QComboBox(layoutWidget_5);
        a_secid_3->setObjectName(QStringLiteral("a_secid_3"));

        verticalLayout_3->addWidget(a_secid_3);

        a_grade_3 = new QComboBox(layoutWidget_5);
        a_grade_3->setObjectName(QStringLiteral("a_grade_3"));

        verticalLayout_3->addWidget(a_grade_3);

        stackedWidget->addWidget(page_8);
        page_17 = new QWidget();
        page_17->setObjectName(QStringLiteral("page_17"));
        groupBox_12 = new QGroupBox(page_17);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(50, 10, 921, 561));
        label_13 = new QLabel(groupBox_12);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 40, 121, 41));
        i_id = new QComboBox(groupBox_12);
        i_id->setObjectName(QStringLiteral("i_id"));
        i_id->setGeometry(QRect(110, 50, 191, 22));
        label_22 = new QLabel(groupBox_12);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 90, 121, 41));
        ic_id = new QComboBox(groupBox_12);
        ic_id->setObjectName(QStringLiteral("ic_id"));
        ic_id->setGeometry(QRect(110, 100, 191, 22));
        label_55 = new QLabel(groupBox_12);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(20, 140, 121, 41));
        i_year = new QComboBox(groupBox_12);
        i_year->setObjectName(QStringLiteral("i_year"));
        i_year->setGeometry(QRect(110, 150, 191, 22));
        label_56 = new QLabel(groupBox_12);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(10, 180, 121, 41));
        i_semester = new QComboBox(groupBox_12);
        i_semester->setObjectName(QStringLiteral("i_semester"));
        i_semester->setGeometry(QRect(110, 190, 191, 22));
        label_57 = new QLabel(groupBox_12);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(10, 220, 141, 41));
        i_sec = new QComboBox(groupBox_12);
        i_sec->setObjectName(QStringLiteral("i_sec"));
        i_sec->setGeometry(QRect(110, 230, 191, 22));
        pushButton_35 = new QPushButton(groupBox_12);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setGeometry(QRect(90, 330, 141, 51));
        pushButton_36 = new QPushButton(groupBox_12);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setGeometry(QRect(700, 30, 141, 51));
        layoutWidget8 = new QWidget(groupBox_12);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(320, 50, 291, 24));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_58 = new QLabel(layoutWidget8);
        label_58->setObjectName(QStringLiteral("label_58"));
        QFont font1;
        font1.setPointSize(10);
        label_58->setFont(font1);

        horizontalLayout_9->addWidget(label_58);

        i_name2 = new QLabel(layoutWidget8);
        i_name2->setObjectName(QStringLiteral("i_name2"));
        i_name2->setFont(font1);

        horizontalLayout_9->addWidget(i_name2);

        stackedWidget->addWidget(page_17);

        retranslateUi(admin);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Form", nullptr));
        pushButton->setText(QApplication::translate("admin", "logout", nullptr));
        label->setText(QApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Admin ID :</span></p></body></html>", nullptr));
#ifndef QT_NO_WHATSTHIS
        adminid->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(QApplication::translate("admin", "GroupBox", nullptr));
        pushButton_2->setText(QApplication::translate("admin", "new student", nullptr));
        pushButton_8->setText(QApplication::translate("admin", "New Instructor", nullptr));
        pushButton_11->setText(QApplication::translate("admin", "New Course", nullptr));
        pushButton_12->setText(QApplication::translate("admin", "Assign Student", nullptr));
        pushButton_15->setText(QApplication::translate("admin", "Assign Instructor", nullptr));
        groupBox_4->setTitle(QApplication::translate("admin", "Assign student ", nullptr));
        label_15->setText(QApplication::translate("admin", "Student Id : ", nullptr));
        label_16->setText(QApplication::translate("admin", "Course Id :", nullptr));
        label_17->setText(QApplication::translate("admin", "Sec Id :", nullptr));
        label_18->setText(QApplication::translate("admin", "Semester :", nullptr));
        label_19->setText(QApplication::translate("admin", "Year :", nullptr));
        label_20->setText(QApplication::translate("admin", "Grade :", nullptr));
        pushButton_13->setText(QApplication::translate("admin", "record", nullptr));
        pushButton_14->setText(QApplication::translate("admin", "back", nullptr));
        rbutton->setText(QApplication::translate("admin", "Record", nullptr));
        back_button->setText(QApplication::translate("admin", "Back", nullptr));
        groupBox_11->setTitle(QApplication::translate("admin", "Course information", nullptr));
        label_2->setText(QApplication::translate("admin", "Course id :", nullptr));
        label_14->setText(QApplication::translate("admin", "Department", nullptr));
        label_21->setText(QApplication::translate("admin", "Credits", nullptr));
        label_12->setText(QApplication::translate("admin", "Title :", nullptr));
        groupBox_16->setTitle(QApplication::translate("admin", "Schedules", nullptr));
        label_69->setText(QApplication::translate("admin", "Semester :", nullptr));
        label_70->setText(QApplication::translate("admin", "Year :", nullptr));
        label_71->setText(QApplication::translate("admin", "Building", nullptr));
        label_72->setText(QApplication::translate("admin", "section id :", nullptr));
        label_73->setText(QApplication::translate("admin", "Room no :", nullptr));
        label_88->setText(QApplication::translate("admin", "Time slot", nullptr));
        label_3->setText(QApplication::translate("admin", "admin", nullptr));
        pushButton_4->setText(QApplication::translate("admin", "logout", nullptr));
        pushButton_5->setText(QApplication::translate("admin", "new student", nullptr));
        pushButton_6->setText(QApplication::translate("admin", "back", nullptr));
        label_7->setText(QApplication::translate("admin", "NAME =", nullptr));
        label_8->setText(QApplication::translate("admin", "dept_name =", nullptr));
        label_9->setText(QApplication::translate("admin", "tot_cred =", nullptr));
        label_6->setText(QApplication::translate("admin", "ID =", nullptr));
        groupBox->setTitle(QApplication::translate("admin", "Record Student", nullptr));
        label_5->setText(QApplication::translate("admin", "cgpa :", nullptr));
        label_4->setText(QApplication::translate("admin", "NAME :", nullptr));
        pushButton_7->setText(QApplication::translate("admin", "record", nullptr));
        depart->setText(QApplication::translate("admin", "Department :", nullptr));
        pushButton_3->setText(QApplication::translate("admin", "back", nullptr));
        groupBox_3->setTitle(QApplication::translate("admin", "Record INSTRUCTOR", nullptr));
        label_10->setText(QApplication::translate("admin", "salary :", nullptr));
        label_11->setText(QApplication::translate("admin", "NAME :", nullptr));
        pushButton_9->setText(QApplication::translate("admin", "record", nullptr));
        depart_2->setText(QApplication::translate("admin", "Department :", nullptr));
        pushButton_10->setText(QApplication::translate("admin", "back", nullptr));
        groupBox_5->setTitle(QApplication::translate("admin", "Assign course", nullptr));
        label_28->setText(QApplication::translate("admin", "Course Id :", nullptr));
        label_29->setText(QApplication::translate("admin", "Sec Id :", nullptr));
        label_30->setText(QApplication::translate("admin", "Semester :", nullptr));
        label_31->setText(QApplication::translate("admin", "Year :", nullptr));
        label_32->setText(QApplication::translate("admin", "Grade :", nullptr));
        pushButton_18->setText(QApplication::translate("admin", "record", nullptr));
        pushButton_19->setText(QApplication::translate("admin", "back", nullptr));
        groupBox_12->setTitle(QApplication::translate("admin", "Assign Instructor", nullptr));
        label_13->setText(QApplication::translate("admin", "ID : ", nullptr));
        label_22->setText(QApplication::translate("admin", "Course ID :", nullptr));
        label_55->setText(QApplication::translate("admin", "Year :", nullptr));
        label_56->setText(QApplication::translate("admin", "Semester :", nullptr));
        label_57->setText(QApplication::translate("admin", "Section ID :", nullptr));
        pushButton_35->setText(QApplication::translate("admin", "Record", nullptr));
        pushButton_36->setText(QApplication::translate("admin", "back", nullptr));
        label_58->setText(QApplication::translate("admin", "instructor name : ", nullptr));
        i_name2->setText(QApplication::translate("admin", "aaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
