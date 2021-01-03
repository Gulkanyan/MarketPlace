#ifndef SUPERADMIN_H
#define SUPERADMIN_H

#include <QMainWindow>

namespace Ui {
class Superadmin;
}

class Superadmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Superadmin(QWidget *parent = nullptr);
    ~Superadmin();

private slots:
    void on_Create_User_pushButton_clicked();

    void on_Create_Admin_pushButton_clicked();

    void on_LogOut_pushButton_clicked();

private:
    Ui::Superadmin *ui;
};

#endif // SUPERADMIN_H
