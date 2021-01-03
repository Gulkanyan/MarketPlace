#include "CreateUser.h"
#include "ui_CreateUser.h"
#include "Superadmin.h"
CreateUser::CreateUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateUser)
{
    ui->setupUi(this);
}

CreateUser::~CreateUser()
{
    delete ui;
}

void CreateUser::on_Back_pushButton_clicked()
{
    Superadmin *leavepage = new Superadmin();
    leavepage->show();
    this-> close();
    this->~CreateUser();
}
