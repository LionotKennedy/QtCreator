#include "totaltrait.h"
#include "ui_totaltrait.h"

#include "connexiondatabase.h"
#include "gestionprestation.h"
#include "QSqlError"
DeleteTrait::DeleteTrait(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteTrait)
{
    ui->setupUi(this);
    setFixedSize(350,350);

    /**** function ****/
    SumT();
    Day();
}

DeleteTrait::~DeleteTrait()
{
    delete ui;
}


/*****bouton no*****/
void DeleteTrait::on_pushButton_clicked()
{
    this->close();
}

/**** sum and day ****/
void DeleteTrait::SumT()
{
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT sum(sum) FROM traitement");

    requete->exec();
    modal->setQuery(*requete);
    ui->comboBox->setModel(modal);

    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


void DeleteTrait::Day()
{
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT sum(day) FROM traitement");

    requete->exec();
    modal->setQuery(*requete);
    ui->comboBox_2->setModel(modal);

    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}
