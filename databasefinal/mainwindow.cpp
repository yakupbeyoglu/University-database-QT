#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QRadioButton>
#include <QtSql>
#include <QtDebug>
#include <QString>
#include "sql.h"
void MainWindow::set_icons()
{
    QPixmap backg("C:/Users/yakup/Downloads/loginpage.png");
    backg=backg.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palet;
    palet.setBrush(QPalette::Background,backg);
    this->setPalette(palet);
this->setMaximumSize(584,615);//set fix window size
 this->setMinimumSize(584,615);//set fix window size

    QPixmap log_icon("C:/Users/yakup/Downloads/button_login.png");
    QIcon Login(log_icon);
    ui->pushButton->setIcon(Login);
    ui->pushButton->setIconSize(log_icon.rect().size());
    QPixmap exit("C:/Users/yakup/Downloads/button_exit.png");
    ui->pushButton_2->setIcon(exit);
    ui->pushButton_2->setIconSize(exit.rect().size());
    QPixmap forgot_icon("C:/Users/yakup/Downloads/button_forgot-password (1).png");
    QIcon forgot(forgot_icon);
    ui->pushButton_3->setIcon(forgot_icon);
    ui->pushButton_3->setIconSize(forgot_icon.rect().size());
     QWidget::setWindowIcon(QIcon("D:/comp227/databasefinal/icons/icons.png"));
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

 ui->setupUi(this);
 set_icons();
  data.set_connection();
    if(data.connopen())
          {
              ui->statusBar->showMessage("Connected");
          }
          else
          {
              ui->statusBar->showMessage("Not3 Connected");
    }

data.closeconn();

}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::logout( )
{



}
void MainWindow::opennew(){
//setAttribute(Qt::WA_DeleteOnClose);
    delete ui;
     MainWindow *a;
    a= new MainWindow;
    a->show();
    close();
    //data.set_connection();
}

bool MainWindow::check_password(QString password){
    if(password=="default")
       return true;
   return false;

}


void MainWindow::on_pushButton_clicked(){
    QString username=ui->user->text();
    QString password=ui->pass->text();
    if(data.connopen()){
   QSqlQuery *query=new  QSqlQuery(data.db);
   query->prepare("SELECT username,password FROM login where  username ='"+username+"'AND password='"+password+"';");
    int type=-1;
    query->exec();
    if(query->next()){
        if(check_password(password)){
         change_pass=new change(username);
         connect(change_pass,SIGNAL(opennew()),this,SLOT(opennew()));
         change_pass->show();
         close();

        }
        else{
        QSqlQuery *typeq=new QSqlQuery(data.db);
        typeq->prepare("SELECT type FROM login where username='"+username+"';");
        typeq->exec();
        if(typeq->next()){
            type=typeq->value(0).toInt();
             data.closeconn();
        if(type==0){
            adm=new admin(username);
            connect(adm,SIGNAL(opennew()),this,SLOT(opennew()));
            adm->show();
            close();
        }
       else  if(type==1){
            std=new student(username);
            connect(std, SIGNAL(opennew()), this, SLOT(opennew()));
            std->show();
            close();
        }
        else if(type==2){
          ins=new instructor(username);
          connect(ins,SIGNAL(opennew()),this,SLOT(opennew()));
          ins->show();
          close();
        }
    }
    }
    }
    else{

        QMessageBox::warning(this,"Invalid Login","Username or Password incorrect");

    }

}
}

void MainWindow::on_user_returnPressed()
{
    emit this-> newTextEntered(ui->user->text());
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Reset Password","Please visit Student Affairs center ");
}
