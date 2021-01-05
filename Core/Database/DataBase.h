#ifndef DATABASE_H
#define DATABASE_H


class DataBase
{
public:
    DataBase();

    ~DataBase();

    bool open();


    bool close();

    // When DB is empty, then populate it with initial data
    bool populate();

    //  **  // helpers
    bool containsData();

    bool dropTables();

    bool createTables();

    bool doStandartInserts();
};

#endif // DATABASE_H
