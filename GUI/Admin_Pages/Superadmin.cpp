#include "Superadmin.h"
#include "ui_Superadmin.h"
#include <CreateAdmin.h>
#include <CreateUser.h>
#include "MainWindow.h"
Superadmin::Superadmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Superadmin)
{
    ui->setupUi(this);
}

Superadmin::~Superadmin()
{
    delete ui;
}

void Superadmin::on_Create_User_pushButton_clicked()
{
   CreateUser *UserCreatepage = new CreateUser();
    UserCreatepage->show();
    this->close();
    this->~Superadmin();
}

void Superadmin::on_Create_Admin_pushButton_clicked()
{
    CreateAdmin *Admincreatepage = new CreateAdmin();
    Admincreatepage->show();
    this->close();
    this->~Superadmin();
}

void Superadmin::on_LogOut_pushButton_clicked()
{
    MainWindow *logout = new MainWindow();
    logout->show();
    this->close();
    this->~Superadmin();
}
