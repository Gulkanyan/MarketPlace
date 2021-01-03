#ifndef CREATEADMIN_H
#define CREATEADMIN_H

#include <QMainWindow>

namespace Ui {
class CreateAdmin;
}

class CreateAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateAdmin(QWidget *parent = nullptr);
    ~CreateAdmin();

private slots:
    void on_Back_pushButton_clicked();

private:
    Ui::CreateAdmin *ui;
};

#endif // CREATEADMIN_H
