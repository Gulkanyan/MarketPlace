#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PushButton_Login_clicked();

    void on_show_hide_pushButton__clicked();

    void on_show_hide_pushButton_clicked();

    void on_pushButton_clicked();

private:
    void initUI();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
