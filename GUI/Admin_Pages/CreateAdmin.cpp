#include "CreateAdmin.h"
#include "ui_CreateAdmin.h"
#include "Superadmin.h"
CreateAdmin::CreateAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAdmin)
{
    ui->setupUi(this);
}

CreateAdmin::~CreateAdmin()
{
    delete ui;
}
void CreateAdmin::on_Back_pushButton_clicked()
{
    Superadmin *leavepage = new Superadmin();
    leavepage->show();
    this-> close();
    this->~CreateAdmin();
}
