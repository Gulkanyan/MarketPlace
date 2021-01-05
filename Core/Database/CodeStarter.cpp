#include "CodeStarter.h"
#include "CoreGlobals.h"
CodeStarter::CodeStarter()
{

}
CodeStarter* CodeStarter::get()
{
    static CodeStarter codestarter;

    return &codestarter;
}

void CodeStarter::runCodeStarter(QThread* parentThread)
{
    CodeStarter* codestarter = get();
    codestarter->m_parentThread=parentThread;
    codestarter->moveToThread(static_cast<QThread*>(codestarter));
    codestarter->connect(codestarter,SIGNAL(codestarter()),codestarter, SLOT(InitJob()));
    codestarter->start();

}

void CodeStarter::quitStarter()
{
    CodeStarter* codestarter = get();
    codestarter->quit();
}
void CodeStarter::InitJob()
{
    initDatabase();
}
void CodeStarter::initDatabase()
{
    bool success = createDatabase();
    emit databaseCreated(success);

}
bool CodeStarter::createDatabase()
{
    CoreGlobals::g_database = new DataBase();
    if(!CoreGlobals::g_database->open())
    {
        return false;
    }
    if(!CoreGlobals::g_database->populate())
    {
        return false;
    }

    return true;
}
