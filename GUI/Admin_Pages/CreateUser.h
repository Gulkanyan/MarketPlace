#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QMainWindow>

namespace Ui {
class CreateUser;
}

class CreateUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateUser(QWidget *parent = nullptr);
    ~CreateUser();

private slots:
    void on_Back_pushButton_clicked();

    void on_save_pushButton_clicked();

private:
    Ui::CreateUser *ui;
};

#endif // CREATEUSER_H
