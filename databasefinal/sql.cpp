#include "sql.h"



void sql::set_connection()
{

    QString servername="MSI\\DEN";//your server name
        QString dbname="University";//your dbname
       db = QSqlDatabase::addDatabase("QODBC3");
       db.setConnectOptions();
        QString dsn=QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;Trusted_connection=yes;").arg(servername).arg(dbname);
        db.setDatabaseName(dsn);

}

void sql::closeconn()
{
    db.close();
}

bool sql::connopen()
{
  if(db.open())
            return true;
        else
            return false;
}
