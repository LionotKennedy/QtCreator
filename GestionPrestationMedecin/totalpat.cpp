#include "totalpat.h"
#include "ui_totalpat.h"


#include "connexiondatabase.h"
#include "gestionprestation.h"
#include "QSqlError"

DeletePat::DeletePat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeletePat)
{
    ui->setupUi(this);
    setFixedSize(350,350);

    /**** function ****/
    SumPat();
}

DeletePat::~DeletePat()
{
    delete ui;
}


/****bouton no*****/
void DeletePat::on_pushButton_clicked()
{
    this->close();
}

/**** Sum Pat *****/

void DeletePat::SumPat()
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
