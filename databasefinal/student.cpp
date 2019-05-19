#include "student.h"
#include "ui_student.h"


student::student(const QString id,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::student)
{
    ui->setupUi(this);
    ID=id;
   ui->no_2->setText(ID);
     ui->stackedWidget->setCurrentIndex(0);

}
void student::set_table()
{
set_combobox();
    data.set_connection();
    if(data.connopen()){
        QSqlQuery *query2=new  QSqlQuery(data.db);
       int i=0;
       QString c_course=ui->scourse->currentText();
   ui->tableWidget_3->setRowCount(5);
       query2->exec("select section.course_id,section.sec_id,section.semester,section.year,section.building,section.room_no,section.time_slot_id,course.credits from section,takes,course where takes.sec_id=section.sec_id  and takes.course_id=section.course_id and section.course_id='"+c_course+"'and section.course_id=course.course_id and takes.ID='"+ID+"';");
       while(query2->next()) {
              ui->tableWidget_3->setItem(i, 0, new QTableWidgetItem(query2->value(0).toString()));
              ui->tableWidget_3->setItem(i, 1, new QTableWidgetItem(query2->value(1).toString()));
              ui->tableWidget_3->setItem(i, 2, new QTableWidgetItem(query2->value(2).toString()));
              ui->tableWidget_3->setItem(i, 3, new QTableWidgetItem(query2->value(3).toString()));
              ui->tableWidget_3->setItem(i, 4, new QTableWidgetItem(query2->value(4).toString()));
              ui->tableWidget_3->setItem(i, 5, new QTableWidgetItem(query2->value(5).toString()));
              ui->tableWidget_3->setItem(i, 6, new QTableWidgetItem(query2->value(6).toString()));
              ui->tableWidget_3->setItem(i, 7, new QTableWidgetItem(query2->value(7).toString()));
              ++i;
         }
    query2->finish();

    }

    data.closeconn();
}
void student::set_combobox()
{
    data.set_connection();
    if(data.connopen()){
  QSqlQuery *qry=new  QSqlQuery(data.db);
    qry->exec("select  distinct course_id from takes where ID='"+ID+"';");
    while(qry->next())
        ui->scourse->addItem( qry->value(0).toString() );


}
}


student::~student()
{
   delete ui->tableWidget;
    delete ui->tableWidget_3;
    delete ui->scourse;
    delete ui;

}

void student::on_pushButton_clicked()
{

    emit opennew();
    close();
    this->deleteLater();

}


void student::on_pushButton_9_clicked()
{
    ui->label_ad->clear();
    ui->label_no->clear();
    ui->label_bolum->clear();
    ui->cgpa->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

void student::on_pushButton_7_clicked()
{
    data.set_connection();
       if(data.connopen()) {
         QSqlQuery query;

         //SELECT  ID, name, dept_name, tot_cred, password FROM student WHERE id=127091");
         query.exec("SELECT  * FROM student WHERE ID=" + ID);
         if(query.next()) {
               ui->label_no->setText(query.value(0).toString());
              ui->label_ad->setText(query.value(1).toString());
              ui->label_bolum->setText(query.value(2).toString());
              ui->cgpa->setText(query.value(3).toString());

         }
}
        ui->stackedWidget->setCurrentIndex(1);
}

void student::on_pushButton_10_clicked()
{
       ui->stackedWidget->setCurrentIndex(0);
     ui->tableWidget->clearContents();

}



void student::on_pushButton_8_clicked()
{
    data.set_connection();
       if(data.connopen()) {
        QSqlQuery *query=new  QSqlQuery(data.db);
       int i=0;
   ui->tableWidget->setRowCount(20);
       query->exec("SELECT  * FROM takes WHERE ID='"+ID+"';");
       while(query->next()) {

              ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query->value(1).toString()));
              ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query->value(2).toString()));
              ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query->value(3).toString()));
              ui->tableWidget->setItem(i, 3, new QTableWidgetItem(query->value(4).toString()));
              ui->tableWidget->setItem(i, 4, new QTableWidgetItem(query->value(5).toString()));

              ++i;
         }
         data.closeconn();
           query->finish();
       }
       ui->stackedWidget->setCurrentIndex(2);
}

void student::on_pushButton_11_clicked()
{


     ui->stackedWidget->setCurrentIndex(0);
     ui->scourse->clear();
     ui->tableWidget_3->clearContents();




}

void student::on_pushButton_12_clicked()
{
   // set_combobox();
    set_table();
    set_combobox();
 ui->stackedWidget->setCurrentIndex(3);
}

void student::on_scourse_currentTextChanged(const QString &arg1)
{
    ui->tableWidget_3->clearContents();
    data.set_connection();
        if(data.connopen()){
            QSqlQuery *query2=new  QSqlQuery(data.db);
           int i=0;

       ui->tableWidget_3->setRowCount(5);
           query2->exec("select section.course_id,section.sec_id,section.semester,section.year,section.building,section.room_no,section.time_slot_id,course.credits from section,takes,course where takes.sec_id=section.sec_id  and takes.course_id=section.course_id and section.course_id='"+arg1+"'and section.course_id=course.course_id and takes.ID='"+ID+"';");
           while(query2->next()) {
                  ui->tableWidget_3->setItem(i, 0, new QTableWidgetItem(query2->value(0).toString()));
                  ui->tableWidget_3->setItem(i, 1, new QTableWidgetItem(query2->value(1).toString()));
                  ui->tableWidget_3->setItem(i, 2, new QTableWidgetItem(query2->value(2).toString()));
                  ui->tableWidget_3->setItem(i, 3, new QTableWidgetItem(query2->value(3).toString()));
                  ui->tableWidget_3->setItem(i, 4, new QTableWidgetItem(query2->value(4).toString()));
                  ui->tableWidget_3->setItem(i, 5, new QTableWidgetItem(query2->value(5).toString()));
                  ui->tableWidget_3->setItem(i, 6, new QTableWidgetItem(query2->value(6).toString()));
                  ui->tableWidget_3->setItem(i, 7, new QTableWidgetItem(query2->value(7).toString()));
                  ++i;
             }
        //query2->finish();

        }
        data.closeconn();

}
