#ifndef SQL_H
#define SQL_H
#include <QtSql>
#include <QSqlDatabase>

class sql
{
public:
    QSqlDatabase db;
    void set_connection();
    void closeconn();
    bool connopen();

};

#endif // SQL_H
