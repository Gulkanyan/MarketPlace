#include "DataBase.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "CoreGlobals.h"
#include "Utils/StandardQueries.h"
#include <QDebug>

DataBase::DataBase()
{

}

DataBase::~DataBase()
{
    close();
}

bool DataBase::open()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("shop.db");

    if (!database.open())
        return false;
    return true;
}

bool DataBase::close()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("shop.db");

    database.close();

    if(database.isOpen())
        return false;
    return true;
}

bool DataBase::populate()
{
    if(containsData())
        return true;

    if (!dropTables() || !createTables() || !doStandartInserts())
        return false;

    return true;
}

bool DataBase::containsData()
{
    QSqlQuery query;
    bool res = query.prepare("SELECT count(*) FROM sqlite_master WHERE type = 'table'");
    res = query.exec();

    int count = 0;
    while(query.next())
    {
        count = query.value(0).toInt();
    }

    if (!res)
    {
        qDebug() << "Res from get users count = " << res << "\n";
        return false;
    }

    qDebug() << "Count of tables " << count;

    if (count != StandardQueries::createTables.count())
        return false;

    return true;
}
