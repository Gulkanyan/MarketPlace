#include "CoreGlobals.h"

namespace CoreGlobals
{
    QApplication* app = 0;
    DataBase *g_database = 0;

}

namespace CoreGlobals
{

}

DataBase& db()
{
    return *CoreGlobals::g_database;
}
