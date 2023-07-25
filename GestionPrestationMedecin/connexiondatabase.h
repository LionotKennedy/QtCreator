#ifndef CONNEXIONDATABASE_H
#define CONNEXIONDATABASE_H


#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "qdebug.h"

class connexion
{
public:
    QSqlDatabase connect;
    bool CBD()
    {
        connect=QSqlDatabase::addDatabase("QMYSQL");
        connect.setHostName("127.0.0.1");
        connect.setUserName("root");
        connect.setDatabaseName("gestion");
        connect.setPort(3306);
        connect.setPassword("");


        if(connect.open())
        {
            qDebug()<< "You are connecting of Database";
            return true;
        }
        else
        {
            qDebug()<< "You are no connecting of Database";
            return false;
        }
    }
    bool connectingOpen()
    {
        return 0;

    }
    bool connectingClose()
    {
        return 0;

    }
    bool connecting_2Open()
    {
        return 0;

    }
    bool connecting_2Close()
    {
        return 0;

    }


};

#endif // CONNEXIONDATABASE_H
