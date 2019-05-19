#include "admin.h"
#include "ui_admin.h"
#include "std_info.h"

void admin::initialize_combo()
{
    data.set_connection();
        data.connopen();
      QSqlQuery *qry=new  QSqlQuery(data.db);
        qry->exec("select ID from student;");
        while(qry->next())
            ui->a_sid->addItem( qry->value(0).toString() );
        QSqlQuery *qry2=new  QSqlQuery(data.db);
          qry2->exec("select distinct  course_id from section;");
          while(qry2->next())
              ui->a_cid->addItem( qry2->value(0).toString() );
              ui->a_secid->addItem("\0");
              ui->a_semester->addItem("\0");
              ui->a_year->addItem("\0");
              QStringList list;
              list<<"\0" << "A" << "A-" << "B+"<<"B"<<"B-"<<"C+"<<"C"<<"C-"<<"D+"<<"D"<<"D-"<<"F";
              //Instance of model type to QStringList
              QStringListModel *model = new QStringListModel();
              model->setStringList(list);
              ui->a_grade->setModel(model);

}

void admin::initalize_course_combo()
{
    data.set_connection();
    data.connopen();
  QSqlQuery *qry=new  QSqlQuery(data.db);
    qry->exec("select dept_name from department;");
    while(qry->next())
        ui->c_dept->addItem( qry->value(0).toString() );
    qry->exec("select time_slot_id from time_slot;");
    while(qry->next())
        ui->s_timeslotid->addItem(qry->value(0).toString());
    QStringList list;
    list<<"FALL" <<"SPRING"<<"SUMMER" ;

    //Instance of model type to QStringList
    QStringListModel *model = new QStringListModel();
    model->setStringList(list);

    ui->s_semester_2->setModel(model);

}

void admin::initialize_instructor_combo()
{
    data.set_connection();
        data.connopen();
      QSqlQuery *qry=new  QSqlQuery(data.db);
        qry->exec("select ID from instructor;");
        while(qry->next())
            ui->i_id->addItem( qry->value(0).toString() );
        QSqlQuery *qry2=new  QSqlQuery(data.db);
          qry2->exec("select distinct  course_id from section;");
          while(qry2->next())
              ui->ic_id->addItem( qry2->value(0).toString() );
              ui->i_year->addItem("\0");
              ui->i_semester->addItem("\0");
              ui->i_sec->addItem("\0");
             QSqlQuery *qry3=new QSqlQuery(data.db);
             QString iid=ui->i_id->currentText();
              qry3->exec("select name From instructor where ID='"+iid+"';");
              QString namee;
              while(qry3->next())
                  namee=qry3->value(0).toString();
              ui->i_name2->setText(namee);

}

void admin::clear_course_combo()
{
   ui->c_id->clear();
   ui->c_tittle->clear();
   ui->c_credit->clear();
   ui->c_dept->clear();
   ui->s_year_2->clear();
   ui->s_semester_2->clear();
   ui->sec_id->clear();
   ui->s_timeslotid->clear();
   ui->c_building_2->clear();
   ui->c_roomno_2->clear();


}

void admin::clear_instructor_combo()
{
    ui->i_id->clear();
    ui->ic_id->clear();
    ui->i_year->clear();
    ui->i_semester->clear();
    ui->i_sec->clear();
     ui->i_name2->clear();

}

admin::admin(const QString l_id,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    ui->adminid->setReadOnly(true);
     ui->adminid->setText(l_id);

}

admin::~admin()
{
    delete ui;
}

void admin::data_change()
{
    QString course=ui->c_id->text();
    QSqlQuery *qry2=new  QSqlQuery(data.db);
      qry2->exec("select distinct section_id from section where course_id='"+course+"';");
      while(qry2->next())
          ui->a_sid->addItem( qry2->value(0).toString() );
        //   ui->a_secid->clear();
           ui->stackedWidget->setCurrentIndex(1);
}

void admin::onNewTextEntered(const QString text)
{
    ui->label->setText(text);

}

void admin::on_pushButton_clicked()
{
    emit opennew();
      this->close();

}

void admin::on_pushButton_2_clicked()
{

    data.set_connection();
    data.connopen();
  QSqlQuery *qry=new  QSqlQuery(data.db);
    qry->exec("select dept_name from department;");
    while(qry->next())
        ui->departments->addItem( qry->value(0).toString() );
ui->stackedWidget->setCurrentIndex(3);

}

void admin::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->std_name->clear();
    ui->std_cgpa->clear();
    ui->departments->clear();
}

void admin::on_pushButton_7_clicked()
{
 data.closeconn();
sql x;
    QString stdname=ui->std_name->text();
    ui->std_cgpa->setClearButtonEnabled(true);
    QString credit =ui->std_cgpa->text();
    QString dept=ui->departments->currentText();
department_name=dept;

    set_info(stdname,credit.toDouble());
   QString c_double=QVariant(cgpa).toString();
    x.set_connection();
    //y.set_connection();

    if(!x.connopen())
         QMessageBox::warning(this,"connection","not connection fail");
    x.connopen();

    QSqlQuery *info=new  QSqlQuery(x.db);
    QSqlQuery *loginfo=new QSqlQuery(x.db);
    loginfo->prepare("INSERT INTO [dbo].[login]([username],[password],[type])VALUES('"+id+"','"+password+"',1);");
    info->prepare("INSERT INTO [dbo].[student]([ID],[name],[dept_name],[tot_cred],[password])VALUES('"+id+"','"+name+"','"+department_name+"','"+c_double+"','"+password+"');");
        if(info->exec()&&loginfo->exec())
          QMessageBox::information(this,"Register","Successfull Registration");
    else
         QMessageBox::warning(this,"Register","Failed Registration");
   loginfo->finish();
   info->finish();
x.closeconn();
ui->departments->clear();
ui->std_name->clear();
ui->std_cgpa->clear();
data.set_connection();
data.connopen();
QSqlQuery *qry=new  QSqlQuery(data.db);
  qry->exec("select dept_name from department;");
  while(qry->next())
      ui->departments->addItem( qry->value(0).toString() );
}



void admin::on_pushButton_8_clicked()
{
    data.set_connection();
    data.connopen();
  QSqlQuery *qry=new  QSqlQuery(data.db);
    qry->exec("select distinct dept_name from department;");
    while(qry->next())
        ui->departments_2->addItem( qry->value(0).toString() );

ui->stackedWidget->setCurrentIndex(4);

}



void admin::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->ins_name->clear();
    ui->ins_salary->clear();
    ui->departments_2->clear();
}


void admin::on_pushButton_9_clicked()
{
    data.closeconn();
   sql x;
       QString insname=ui->ins_name->text();
       ui->ins_salary->setClearButtonEnabled(true);
       QString salary =ui->ins_salary->text();
       QString dept=ui->departments_2->currentText();
     idepartment_name=dept;

       setins_info(insname,salary.toDouble());
      QString s_double=QVariant(i_salary).toString();
       x.set_connection();

       if(!x.connopen())
            QMessageBox::warning(this,"connection","not connection fail");
       x.connopen();
       QSqlQuery *info=new  QSqlQuery(x.db);
       info->prepare("INSERT INTO [dbo].[instructor]([ID],[name],[dept_name],[salary],[password])VALUES('"+iid+"','"+iname+"','"+idepartment_name+"','"+s_double+"','"+ipassword+"');");
       if(info->exec())
           QMessageBox::information(this,"Register","Successfull Registration");
       else
            QMessageBox::warning(this,"Register","Failed Registration");
       info->finish();
   x.closeconn();
   ui->departments_2->clear();
   ui->ins_name->clear();
   ui->ins_salary->clear();
   data.set_connection();
   data.connopen();
   QSqlQuery *qry=new  QSqlQuery(data.db);
     qry->exec("select distinct dept_name from department;");
     while(qry->next())
         ui->departments_2->addItem( qry->value(0).toString() );
}

void admin::on_pushButton_11_clicked()
{
    initalize_course_combo();

ui->stackedWidget->setCurrentIndex(2);


}

void admin::on_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->c_id->clear();
    ui->c_credit->clear();
    ui->c_tittle->clear();
    ui->c_dept->clear();
    ui->s_year_2->clear();
    ui->s_semester_2->clear();
    ui->sec_id->clear();
    ui->s_timeslotid->clear();
    ui->c_building_2->clear();
    ui->c_roomno_2->clear();

}

void admin::on_rbutton_clicked()
{
    data.closeconn();
   sql x;
       QString c_title=ui->c_tittle->text();
       QString cid=ui->c_id->text();
       ui->c_credit->setClearButtonEnabled(true);
       QString credit =ui->c_credit->text();
       QString dept=ui->c_dept->currentText();
       set_course(cid,c_title,dept,credit);
       QString section_id=ui->sec_id->text();
       QString year=ui->s_year_2->text();
       QString built=ui->c_building_2->text();
       QString semester=ui->s_semester_2->currentText();
       QString timeslot=ui->s_timeslotid->currentText();
       QString room=ui->c_roomno_2->text();

       x.set_connection();
// c_id,c_title,c_department,c_credits
       if(!x.connopen())
            QMessageBox::warning(this,"connection","not connection fail");
       x.connopen();
       QSqlQuery *info=new  QSqlQuery(x.db);
       info->prepare("INSERT INTO [dbo].[course]([course_id],[title],[dept_name],[credits])VALUES('"+c_id+"','"+c_title+"','"+c_department+"','"+c_credits+"');");
       QSqlQuery *info2=new QSqlQuery(x.db);
         info2->prepare("INSERT INTO [dbo].[section] ([course_id],[sec_id],[semester],[year],[building],[room_no],[time_slot_id])VALUES ('"+c_id+"','"+section_id+"','"+semester+"','"+year+"','"+built+"','"+room+"','"+timeslot+"');");
       if(info->exec()){
           if(info2->exec())
             QMessageBox::information(this,"Register","Successfull Registration");
       }
       else
            QMessageBox::warning(this,"Register","Failed Registration");
       info->finish();
       info2->finish();
   x.closeconn();
   clear_course_combo();
   initalize_course_combo();
}



void admin::on_pushButton_12_clicked()
{  initialize_combo();
           //  ui->a_secid->setEditable(false);

              ui->stackedWidget->setCurrentIndex(1);

 }




void admin::on_pushButton_14_clicked()
{

    ui->a_sid->clear();
    ui->a_secid->clear();
    ui->a_semester->clear();
    ui->a_cid->clear();
     ui->a_year->clear();
     ui->a_grade->clear();
     ui->stackedWidget->setCurrentIndex(0);
}

void admin::on_a_cid_currentTextChanged(const QString &arg1)
{
    ui->a_year->clear();
    QString course=arg1;
    QSqlQuery *qry3=new  QSqlQuery(data.db);
      qry3->exec("select distinct year from section where course_id='"+course+"';");
      while(qry3->next())
          ui->a_year->addItem( qry3->value(0).toString() );
      ui->a_semester->clear();
      QSqlQuery *qry5=new  QSqlQuery(data.db);
      QString x=ui->a_cid->currentText();
      QString y=ui->a_year->currentText();
      ui->a_semester->clear();
        qry5->exec("select distinct semester from section where course_id='"+x+"'and year='"+y+"';");
        while(qry5->next())
            ui->a_semester->addItem( qry5->value(0).toString() );
  }






void admin::on_pushButton_13_clicked()
{
    data.closeconn();
   sql x;
   QString stdid=ui->a_sid->currentText();
       QString c_id=ui->a_cid->currentText();
       QString grade=ui->a_grade->currentText();
       QString sec_id=ui->a_secid->currentText();
       QString semester=ui->a_semester->currentText();
       QString year=ui->a_year->currentText();

       x.set_connection();
       if(!x.connopen())
            QMessageBox::warning(this,"connection","not connection fail");
       x.connopen();
       QSqlQuery *info=new  QSqlQuery(x.db);
       info->prepare("INSERT INTO [dbo].[takes]([ID],[course_id],[sec_id],[semester],[year],[grade])VALUES('"+stdid+"','"+c_id+"','"+sec_id+"','"+semester+"','"+year+"','"+grade+"');");
       if(info->exec())
           QMessageBox::information(this,"Register","Successfull Registration");
       else
            QMessageBox::warning(this,"Register","Failed Registration Try again");
       info->finish();
   x.closeconn();
   ui->a_sid->clear();
   ui->a_secid->clear();
   ui->a_semester->clear();
   ui->a_cid->clear();
    ui->a_year->clear();
    ui->a_grade->clear();
  initialize_combo();


}

void admin::on_a_year_currentTextChanged(const QString &arg1)
{
    QSqlQuery *qry5=new  QSqlQuery(data.db);
    QString x=ui->a_cid->currentText();

    ui->a_semester->clear();
      qry5->exec("select distinct semester from section where course_id='"+x+"'and year='"+arg1+"';");
      while(qry5->next())
          ui->a_semester->addItem( qry5->value(0).toString() );

}

void admin::on_a_semester_currentTextChanged(const QString &arg1)
{
    QSqlQuery *qry5=new  QSqlQuery(data.db);
    QString x=ui->a_cid->currentText();
    QString y=ui->a_year->currentText();

    ui->a_secid->clear();
      qry5->exec("select distinct sec_id from section where course_id='"+x+"'and year='"+y+"'and semester='"+arg1+"';");
      while(qry5->next())
          ui->a_secid->addItem( qry5->value(0).toString() );
}

void admin::on_pushButton_15_clicked()
{
    initialize_instructor_combo();
    ui->stackedWidget->setCurrentIndex(6);
}

void admin::on_ic_id_currentTextChanged(const QString &arg1)
{
    ui->i_year->clear();
    QString course=arg1;
    QSqlQuery *qry3=new  QSqlQuery(data.db);
      qry3->exec("select distinct year from section where course_id='"+course+"';");
      while(qry3->next())
          ui->i_year->addItem( qry3->value(0).toString() );

}

void admin::on_i_year_currentTextChanged(const QString &arg1)
{
    QSqlQuery *qry5=new  QSqlQuery(data.db);
    QString x=ui->ic_id->currentText();

    ui->i_semester->clear();
      qry5->exec("select distinct semester from section where course_id='"+x+"'and year='"+arg1+"';");
      while(qry5->next())
          ui->i_semester->addItem( qry5->value(0).toString() );

}

void admin::on_i_semester_currentTextChanged(const QString &arg1)
{
    QSqlQuery *qry5=new  QSqlQuery(data.db);
    QString x=ui->ic_id->currentText();
    QString y=ui->i_year->currentText();

    ui->i_sec->clear();
      qry5->exec("select distinct sec_id from section where course_id='"+x+"'and year='"+y+"'and semester='"+arg1+"';");
      while(qry5->next())
          ui->i_sec->addItem( qry5->value(0).toString() );
}

void admin::on_pushButton_35_clicked()
{
    data.closeconn();
   sql x;
   QString ins_id=ui->i_id->currentText();
       QString c_id=ui->ic_id->currentText();
       QString sec_id=ui->i_sec->currentText();
       QString semester=ui->i_semester->currentText();
       QString year=ui->i_year->currentText();

       x.set_connection();
       if(!x.connopen())
            QMessageBox::warning(this,"connection","not connection fail");
       x.connopen();
       QSqlQuery *info=new  QSqlQuery(x.db);
       info->prepare("INSERT INTO [dbo].[teaches]([ID],[course_id],[sec_id],[semester],[year])VALUES('"+ins_id+"','"+c_id+"','"+sec_id+"','"+semester+"','"+year+"');");
       if(info->exec())
           QMessageBox::information(this,"Register","Successfull Registration");
       else
            QMessageBox::warning(this,"Register","Failed Registration Try again");
       info->finish();
   x.closeconn();
  clear_instructor_combo();
  initialize_instructor_combo();
}
void admin::on_pushButton_36_clicked()
{
    clear_instructor_combo();
    ui->stackedWidget->setCurrentIndex(0);

}

void admin::on_i_id_currentTextChanged(const QString &arg1)
{

   ui->i_name2->clear();
   QSqlQuery *qry3=new QSqlQuery(data.db);
    qry3->exec("select name From instructor where ID='"+arg1+"';");
    QString namee;
    while(qry3->next())
        namee=qry3->value(0).toString();
    ui->i_name2->setText(namee);
}
