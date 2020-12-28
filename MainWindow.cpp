#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "AdminMainPage.h"

#include <QShortcut>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

    if(username == "test" && password == "1234")
    {
        QMessageBox::information(this , " Login", " Username and password are correct");
        AdminMainPage *adminPage = new AdminMainPage();
        adminPage->show();
        this->close();
        this->~MainWindow();
    }
    else
    {
        QMessageBox::warning(this, " Login" ," Username and password is not correct");
    }
}

