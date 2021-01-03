#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "AdminMainPage.h"
#include "Superadmin.h"
#include <QShortcut>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/Icons/Resources/Icons/hide.jpg"));
    initUI();
}

void MainWindow::initUI()
{
    ui->PushButton_Login->setShortcut(Qt::Key_Enter);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if(username == "admin" && password == "1234")
    {
        Superadmin *adminPage = new Superadmin();
        adminPage->show();
        this->close();
        this->~MainWindow();
    }
    else
    {
        QMessageBox::warning(this, " Login" ," Username and password is not correct");
    }
}


