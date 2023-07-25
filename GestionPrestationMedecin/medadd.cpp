#include "medadd.h"
#include "ui_medadd.h"

#include "gestionprestation.h"
#include "connexiondatabase.h"

MedAdd::MedAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MedAdd)
{
    ui->setupUi(this);
    setFixedSize(350,550);
}

MedAdd::~MedAdd()
{
    delete ui;
}

void MedAdd::on_pushButton_clicked()
{
    this->hide();
}

void MedAdd::on_pushButton_2_clicked()
{
    connexion connecting;
    connecting.CBD();
    QSqlQuery requete;

    QString number = ui->lineEdit_3->text();
    QString name  = ui->lineEdit_2->text();
    QString benefit = ui->lineEdit->text();

    requete.prepare("INSERT INTO medecin(number,name,benefit) VALUES(?,?,?);");
    requete.addBindValue(number);
    requete.addBindValue(name);
    requete.addBindValue(benefit);
    qDebug() <<requete.exec();
    QMessageBox::information(this, "Data","receive completing");
    hide();
}
