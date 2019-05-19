#include "std_info.h"
#include "sql.h"
void std_info::set_info(QString sname,double credit=0){
    name=sname;

    set_id();//id number choosen from the database and will increase 1
   cgpa=credit;
   password="default";

}

void std_info::set_id()
{
    //id number choosen from the database and will increase 1
    data1.set_connection();
    data1.connopen();
    QSqlQuery *last=new QSqlQuery(data1.db);
    //last->prepare("select TOP 1 ID from student order by (ID)desc ;");
    last->prepare("select TOP 1 username from login where type = 1 order by (username)desc ;");
    last->exec();
    while(last->next()){
        int x =last->value(0).toInt();
        x=x+1;
        QString y= QVariant(x).toString();
       id=y;
}
    data1.closeconn();

}




