#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "std_info.h"
#include "ins_info.h"
#include "course.h"
#include "sql.h"
#include <QMessageBox>

namespace Ui {
class admin;
}

class admin : public QWidget,public std_info,public ins_info,public course
{
    Q_OBJECT

public:
   sql data;
   void initialize_combo();
   void initalize_course_combo();
   void initialize_instructor_combo();
   void clear_course_combo();
   void clear_instructor_combo();
    explicit admin(const QString,QWidget *parent = nullptr);
    void setid(QString);
    ~admin();

private:
    Ui::admin *ui;

public slots:
    void data_change();
     void onNewTextEntered(const QString text);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_7_clicked();
 void on_pushButton_8_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_11_clicked();
    void on_back_button_clicked();
    void on_rbutton_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_14_clicked();
    void on_a_cid_currentTextChanged(const QString &arg1);
    void on_pushButton_13_clicked();
    void on_a_year_currentTextChanged(const QString &arg1);
    void on_a_semester_currentTextChanged(const QString &arg1);
    void on_pushButton_15_clicked();
    void on_ic_id_currentTextChanged(const QString &arg1);
    void on_i_year_currentTextChanged(const QString &arg1);
    void on_i_semester_currentTextChanged(const QString &arg1);
    void on_pushButton_35_clicked();
    void on_pushButton_36_clicked();
    void on_i_id_currentTextChanged(const QString &arg1);

signals:
    void logout();
    void opennew();
   QString get_id();
};

#endif // ADMIN_H
