#include "medupdate.h"
#include "ui_medupdate.h"

#include "connexiondatabase.h"
#include "gestionprestation.h"
#include "QSqlError"

MedUpdate::MedUpdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MedUpdate)
{
    ui->setupUi(this);

    setFixedSize(350,550);



    /****display list of combobox*****/
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT id_med FROM medecin");

    requete->exec();
    modal->setQuery(*requete);
  //  ui->comboBox->setModel(modal);

    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}

MedUpdate::~MedUpdate()
{
    delete ui;
}

void MedUpdate::on_pushButton_clicked()
{
    this->close();
}

QString MedUpdate::getNumber(QString numero)
{
    ui->lineEdit_2->setText(numero);
    return numero;
}

QString MedUpdate::getName(QString nom)
{
    ui->lineEdit->setText(nom);
    return nom;
}

QString MedUpdate::getBenefit(QString taux)
{
    ui->lineEdit_3->setText(taux);
    qDebug()<< taux;
    return taux;
}

QString MedUpdate::getId(QString id)
{
    qDebug()<< id;
 /*   ui->idLine->setText(id);
    this->id= ui->idLine->text();*/
    this->Id=id;
    return id;
}

void MedUpdate::on_pushButton_3_clicked()
{

    if(QMessageBox::question(this, "Confirmation", "Do you want to update this data ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        qDebug() << Id;

        connexion connecting;
        connecting.CBD();
        QSqlQuery requete;


        QString number = ui->lineEdit_2->text();
        QString name  = ui->lineEdit->text();
        QString benefit = ui->lineEdit_3->text();

        requete.prepare("UPDATE medecin SET number=:number,name=:name,benefit=:benefit WHERE id_med='"+Id+"'");
        requete.addBindValue(number);
        requete.addBindValue(name);
        requete.addBindValue(benefit);
        qDebug() <<requete.exec();
        qDebug()<<requete.lastError();
        QMessageBox::information(this, "Edit Data","Update successful");


    }
    hide();
}
