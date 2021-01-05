#include "StandardQueries.h"

namespace StandardQueries
{
    const QStringList deleteTables=
    {
        "DROP TABLE IF EXITS users;"
    };
    const QStringList createTables=
    {
        "CREATE TABLE users"
        "(id INT PRIMARY KEY NOT NULL,"
        "username TEXT,"
        "password TEXT,"
        "is_admin INT,"
        "name TEXT, "
        "surname TEXT,;",
    };
    const QStringList insertQuerie=
    {
        "INSERT INTO users"
        "(id,username,password,is_admin,name,surname)"
        " VALUES(1,'admin','1234',1,'superadmin','superadmin');",
    };
}
