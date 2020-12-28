#include "AdminMainPage.h"
#include "ui_AdminMainPage.h"
#include "MainWindow.h"

AdminMainPage::AdminMainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMainPage)
{
    ui->setupUi(this);
}

AdminMainPage::~AdminMainPage()
{
    delete ui;
}

void AdminMainPage::on_back_PushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
    this->~AdminMainPage();
}
