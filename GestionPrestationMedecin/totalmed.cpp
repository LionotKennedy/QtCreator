#include "totalmed.h"
#include "ui_totalmed.h"

#include "connexiondatabase.h"
#include "gestionprestation.h"
#include "QSqlError"

DeleteMed::DeleteMed(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteMed)
{
    ui->setupUi(this);
    setFixedSize(350,350);

    /**** function ****/
    SumMed();
}

DeleteMed::~DeleteMed()
{
    delete ui;
}


/*****bouton no*****/
void DeleteMed::on_pushButton_clicked()
{
    this->close();
}


/***** sum medecin *****/
void DeleteMed::SumMed()
{
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT sum(benefit) FROM medecin");

    requete->exec();
    modal->setQuery(*requete);
    ui->comboBox->setModel(modal);

    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}
