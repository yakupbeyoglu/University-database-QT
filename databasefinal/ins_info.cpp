#include "ins_info.h"


void ins_info::setins_info(QString name, double salary=0)
{
    iname=name;

    set_insid();//id number choosen from the database and will increase 1
   i_salary=salary;
   ipassword="default";

}

void ins_info::set_insid()
{
    //id number choosen from the database and will increase 1
    data1.set_connection();
    data1.connopen();
    QSqlQuery *last=new QSqlQuery(data1.db);
    last->prepare("select TOP 1 ID from instructor  order by (ID)desc ;");
    last->exec();
    while(last->next()){
        int x =last->value(0).toInt();
        x=x+1;
        QString y= QVariant(x).toString();
       iid=y;
}
    data1.closeconn();

}
