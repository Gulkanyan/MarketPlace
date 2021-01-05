#ifndef COREGLOBALS_H
#define COREGLOBALS_H

#include <QSettings>
#include <QApplication>
#include "Core/Database/DataBase.h"


namespace CoreGlobals
{
extern QApplication* app;

extern DataBase* g_database;
}

namespace CoreGlobals
{

}

DataBase& db();

#endif // COREGLOBALS_H
