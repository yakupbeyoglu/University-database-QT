#ifndef COURSE_H
#define COURSE_H
#include "sql.h"


class course
{
public :
    void set_course(QString,QString,QString,QString);
    QString c_id,c_title,c_department,c_credits;
};

#endif // COURSE_H
