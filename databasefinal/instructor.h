#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <QWidget>
#include "sql.h"

namespace Ui {
class instructor;
}

class instructor : public QWidget
{
    Q_OBJECT

public:
     sql data;
    explicit instructor(QString,QWidget *parent = nullptr);
    QString ID;
      void set_combobox();
    void set_table();

    ~instructor();

private:
    Ui::instructor *ui;

signals:
    void logout();
    void opennew();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_11_clicked();
    void on_scourse_currentTextChanged(const QString &arg1);
};

#endif // INSTRUCTOR_H
