#ifndef CODESTARTER_H
#define CODESTARTER_H
#include <QThread>
#include <QApplication>
#include "CoreGlobals.h"

class CodeStarter:public QThread
{
    Q_OBJECT
public:
    CodeStarter();
    static CodeStarter* get();
    static void quitStarter();
    static void runCodeStarter(QThread *parentThread);
private slots:
    void InitJob();
private:
    void initDatabase();
private:
    bool createDatabase();
signals:
    void databaseCreated(bool);
private:
    QThread* m_parentThread;
};

#endif // CODESTARTER_H
