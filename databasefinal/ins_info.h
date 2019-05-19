#ifndef INS_INFO_H
#define INS_INFO_H
#include "sql.h"

class ins_info
{
public:
    sql data1;
    void setins_info(QString,double);
    void set_insid();
    QString iid,iname,idepartment_name,ipassword;
    double i_salary;
};

#endif // INS_INFO_H
