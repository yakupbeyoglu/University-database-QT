#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "instructor.h"
#include "student.h"
#include "admin.h"
#include "sql.h"
#include "change.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    sql data;
  void set_icons();
  bool check_password(QString);

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public :

public slots:
     void opennew();

private slots:
     void on_pushButton_clicked();
     void logout();
     void on_user_returnPressed();
     void on_pushButton_3_clicked();
signals:
void newTextEntered(const QString &text);
private:
    Ui::MainWindow *ui;
    admin *adm;
    student *std;
    instructor *ins;
    change *change_pass;


};

#endif // MAINWINDOW_H
