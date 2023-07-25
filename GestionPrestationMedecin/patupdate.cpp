#include "patupdate.h"
#include "ui_patupdate.h"

#include "connexiondatabase.h"
#include "gestionprestation.h"
#include "QSqlError"

PatUpdate::PatUpdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatUpdate)
{
    ui->setupUi(this);
    setFixedSize(350,550);
}

PatUpdate::~PatUpdate()
{
    delete ui;
}

void PatUpdate::on_pushButton_clicked()
{
    this->hide();
}
QString PatUpdate::getNumber(QString numero)
{
    ui->lineEdit_3->setText(numero);
    return numero;
}

QString PatUpdate::getName(QString nom)
{
    ui->lineEdit->setText(nom);
    return nom;
}

QString PatUpdate::getAddress(QString adress)
{
    ui->lineEdit_2->setText(adress);
    return adress;
}

QString PatUpdate::getId(QString id)
{
    qDebug()<< id;
    this->Id=id;
    return id;
}

void PatUpdate::on_yes_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Do you want to update this data ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        qDebug() << Id;

        connexion connecting;
        connecting.CBD();
        QSqlQuery requete;


        QString number = ui->lineEdit_3->text();
        QString name  = ui->lineEdit->text();
        QString address = ui->lineEdit_2->text();

        requete.prepare("UPDATE patient SET number=:number,name=:name, address=:address WHERE id_pat='"+Id+"'");
        requete.addBindValue(number);
        requete.addBindValue(name);
        requete.addBindValue(address);
        qDebug() <<requete.exec();
        qDebug()<<requete.lastError();
        QMessageBox::information(this, "Edit Data","Update successful");


    }
    hide();
}
