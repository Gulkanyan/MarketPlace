#include "CreateUser.h"
#include "ui_CreateUser.h"
#include "Superadmin.h"
#include <QtSql>

CreateUser::CreateUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateUser)
{
    ui->setupUi(this);
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//        db.setHostName("bigblue");
//        db.setDatabaseName("flightdb");
//        db.setUserName("acarlson");
//        db.setPassword("1uTbSbAs");
//        bool ok = db.open();
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

void CreateUser::on_save_pushButton_clicked()
{

}
