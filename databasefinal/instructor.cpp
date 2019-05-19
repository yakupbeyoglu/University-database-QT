#include "instructor.h"
#include "ui_instructor.h"
#include <QMessageBox>

instructor::instructor(QString id,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::instructor)
{
    ui->setupUi(this);
    ID=id;
    ui->no_2->setText(ID);
    ui->stackedWidget->setCurrentIndex(0);
}


void instructor::set_table()
{
        data.set_connection();

set_combobox();
        if(data.connopen()){
            QSqlQuery *query2=new  QSqlQuery(data.db);
           int i=0;
           QString c_course=ui->scourse->currentText();

       ui->tableWidget_3->setRowCount(50);
       if(query2->exec("select Takes.ID,student.name,student.dept_name,student.tot_cred,Takes.grade from Takes,student,teaches where Takes.course_id ='"+c_course+"' and Takes.course_id=teaches.course_id and Takes.sec_id=teaches.sec_id and Takes.semester=teaches.semester and Takes.year=teaches.year and Takes.ID=student.ID and teaches.ID='"+ID+"';"))
       {
           while(query2->next()) {
                  ui->tableWidget_3->setItem(i, 0, new QTableWidgetItem(query2->value(0).toString()));
                  ui->tableWidget_3->setItem(i, 1, new QTableWidgetItem(query2->value(1).toString()));
                  ui->tableWidget_3->setItem(i, 2, new QTableWidgetItem(query2->value(2).toString()));
                  ui->tableWidget_3->setItem(i, 3, new QTableWidgetItem(query2->value(3).toString()));
                  ui->tableWidget_3->setItem(i, 4, new QTableWidgetItem(query2->value(4).toString()));

                  ++i;
             }
        query2->finish();

        }
       else {
      QMessageBox::warning(this,"incorrect","query has problem");
       }
        }


       data.closeconn();


}
void instructor::set_combobox()
{
    data.set_connection();
    if(data.connopen()){
  QSqlQuery *qry=new  QSqlQuery(data.db);
    qry->exec("select  distinct course_id from teaches where ID='"+ID+"';");
    while(qry->next()){
        ui->scourse->addItem(qry->value(0).toString());
    }

    //set_table();
    qry->finish();

}

}



instructor::~instructor()
{
    delete ui;
}

void instructor::on_pushButton_clicked()
{
    this->close();
    this->deleteLater();
    emit opennew();
    this->deleteLater();
}

void instructor::on_pushButton_7_clicked()
{
    data.set_connection();
       if(data.connopen()) {
         QSqlQuery query;

         //SELECT  ID, name, dept_name, tot_cred, password FROM student WHERE id=127091");
         query.exec("SELECT  * FROM instructor WHERE ID=" + ID);
         if(query.next()) {
               ui->label_no->setText(query.value(0).toString());
              ui->label_ad->setText(query.value(1).toString());
              ui->label_bolum->setText(query.value(2).toString());
              ui->salary->setText(query.value(3).toString());

         }
}
        ui->stackedWidget->setCurrentIndex(1);
      //  data.closeconn();
}

void instructor::on_pushButton_9_clicked()
{
    ui->label_ad->clear();
        ui->label_no->clear();
        ui->label_bolum->clear();
        ui->salary->clear();
        ui->stackedWidget->setCurrentIndex(0);
}

void instructor::on_pushButton_2_clicked()
{
    data.set_connection();
       if(data.connopen()) {
        QSqlQuery *query=new  QSqlQuery(data.db);
       int i=0;
   ui->tableWidget->setRowCount(20);
       query->exec("SELECT  * FROM teaches WHERE ID=" + ID);
       while(query->next()) {

              ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query->value(1).toString()));
              ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query->value(2).toString()));
              ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query->value(3).toString()));
              ui->tableWidget->setItem(i, 3, new QTableWidgetItem(query->value(4).toString()));

              ++i;
         }

           query->finish();
       }
       ui->stackedWidget->setCurrentIndex(2);
       data.closeconn();
}

void instructor::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
  ui->tableWidget->clearContents();

}

void instructor::on_pushButton_3_clicked()
{
    set_combobox();
    set_table();
 ui->stackedWidget->setCurrentIndex(3);

}

void instructor::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget_3->clearContents();
    ui->scourse->clear();



}

void instructor::on_scourse_currentTextChanged(const QString &arg1)
{
    ui->tableWidget_3->clearContents();
   // ui->scourse->clear();
    data.set_connection();
    if(data.connopen()){
        QSqlQuery *query2=new  QSqlQuery(data.db);
       int i=0;
       //QString c_course=ui->scourse->currentText();
   ui->tableWidget_3->setRowCount(50);
   if(query2->exec("select Takes.ID,student.name,student.dept_name,student.tot_cred,Takes.grade from Takes,student,teaches where Takes.course_id ='"+arg1+"' and Takes.course_id=teaches.course_id and Takes.sec_id=teaches.sec_id and Takes.semester=teaches.semester and Takes.year=teaches.year and Takes.ID=student.ID and teaches.ID='"+ID+"';"))
   {
       while(query2->next()) {
              ui->tableWidget_3->setItem(i, 0, new QTableWidgetItem(query2->value(0).toString()));
              ui->tableWidget_3->setItem(i, 1, new QTableWidgetItem(query2->value(1).toString()));
              ui->tableWidget_3->setItem(i, 2, new QTableWidgetItem(query2->value(2).toString()));
              ui->tableWidget_3->setItem(i, 3, new QTableWidgetItem(query2->value(3).toString()));
              ui->tableWidget_3->setItem(i, 4, new QTableWidgetItem(query2->value(4).toString()));

              ++i;
         }
    query2->finish();

    }

}
    data.closeconn();
}
