#ifndef STD_INFO_H
#define STD_INFO_H
#include <QString>
#include <sql.h>

class std_info
{
public:
    sql data1;
    void set_info(QString,double);
    void set_id();
    QString id,name,department_name,password;
    double cgpa;

};

#endif // STD_INFO_H
