#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>
#include "sql.h"
#include "std_info.h"

namespace Ui {
class student;
}

class student : public QWidget
{
    Q_OBJECT

public:
    sql data;
    QString ID;
     void set_table();
    void set_combobox();

    explicit student(const QString ,QWidget *parent = nullptr);
    ~student();

private:
    Ui::student *ui;

signals:
    void logout();
    void opennew();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_9_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_scourse_currentTextChanged(const QString &arg1);
};

#endif // STUDENT_H
