#include "patadd.h"
#include "ui_patadd.h"

#include "gestionprestation.h"
#include "connexiondatabase.h"

PatAdd::PatAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatAdd)
{
    ui->setupUi(this);
    setFixedSize(350,550);
}

PatAdd::~PatAdd()
{
    delete ui;
}

void PatAdd::on_refuse_clicked()
{
    this->hide();
}

void PatAdd::on_accepeted_clicked()
{
     connexion connecting;
     connecting.CBD();
     QSqlQuery requete;

     QString number = ui->lineEdit->text();
     QString name  = ui->lineEdit_3->text();
     QString address = ui->lineEdit_2->text();

     requete.prepare("INSERT INTO patient(number,name,address) VALUES(?,?,?);");
     requete.addBindValue(number);
     requete.addBindValue(name);
     requete.addBindValue(address);
     qDebug() <<requete.exec();
     QMessageBox::information(this, "Data","receive completing");
     hide();
}
