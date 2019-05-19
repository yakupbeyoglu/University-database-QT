#include "change.h"
#include "ui_change.h"

change::change(const QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change)
{
   ID=id;
    ui->setupUi(this);
}

change::~change()
{
    delete ui;
}

void change::on_pushButton_clicked()
{
     QString new_password=ui->newpass->text();
     data.set_connection();
    if(data.connopen()){
        QSqlQuery *query=new  QSqlQuery(data.db);
        query->prepare("UPDATE [dbo].[login] SET [password]='"+new_password+"'WHERE   username='"+ID+"'");
        if(query->exec())
            QMessageBox::information(this,"Password change","Successfull");
        else {
            QMessageBox::warning(this,"Password change","Failed Try again");
        }
    }
    data.closeconn();
    this->close();
    this->deleteLater();
    emit opennew();
}
