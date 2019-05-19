#ifndef CHANGE_H
#define CHANGE_H

#include <QDialog>

#include "sql.h"
#include <QMessageBox>
namespace Ui {
class change;
}

class change : public QDialog
{
    Q_OBJECT

public:
    sql data;
    QString ID;
    explicit change(const QString ,QWidget *parent = nullptr);
    ~change();

private slots:
    void on_pushButton_clicked();

private:
    Ui::change *ui;
 signals:
    void opennew();
};

#endif // CHANGE_H
