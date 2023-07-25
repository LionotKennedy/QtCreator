#include "addtrait.h"
#include "ui_addtrait.h"

#include "connexiondatabase.h"
#include "gestionprestation.h"
#include "QSqlError"

AddTrait::AddTrait(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTrait)
{
    ui->setupUi(this);
    setFixedSize(355,700);

    /******Select Medecins******/
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT number FROM medecin");

    requete->exec();
    modal->setQuery(*requete);
    ui->medecin->setModel(modal);

    connecting.connectingClose();
    qDebug() << (modal->rowCount());




    /******Select Patients******/
    connexion connecting_2;
    QSqlQueryModel *modal_2 = new QSqlQueryModel();

    connecting_2.connecting_2Open();
    QSqlQuery* requete_2 = new QSqlQuery(connecting_2.connect);
    requete_2->prepare("SELECT number FROM patient");

    requete_2->exec();
    modal_2->setQuery(*requete_2);
    ui->patient->setModel(modal_2);

    connecting_2.connecting_2Close();
    qDebug() << (modal_2->rowCount());
}

AddTrait::~AddTrait()
{
    delete ui;
}

/*** bouton refuser ***/
void AddTrait::on_refuse_clicked()
{
    this->close();
}

/*** formulaire medecins ***/
void AddTrait::on_medecin_currentIndexChanged(const QString &arg1)
{
    QString number=ui->medecin->currentText();

    QSqlQuery requete;
    requete.prepare("SELECT * FROM medecin WHERE number='"+number+"'");

    if(requete.exec())
    {
        while(requete.next())
        {
            ui->lineEdit->setText(requete.value(1).toString());
            ui->lineEdit_6->setText(requete.value(2).toString());
            ui->lineEdit_4->setText(requete.value(3).toString());
        }
    }
    else
    {
        QMessageBox::critical(this, tr("error::"),requete.lastError().text());
    }

}

/*** formulaire patient ***/
void AddTrait::on_patient_currentIndexChanged(const QString &arg1)
{
    QString number=ui->patient->currentText();

    QSqlQuery requete;
    requete.prepare("SELECT * FROM patient WHERE number='"+number+"'");

    if(requete.exec())
    {
        while(requete.next())
        {
            ui->lineEdit_5->setText(requete.value(1).toString());
            ui->lineEdit_8->setText(requete.value(2).toString());
            ui->lineEdit_3->setText(requete.value(3).toString());
        }
     }
    else
    {
        QMessageBox::critical(this, tr("error::"),requete.lastError().text());
    }

}


/*** bouton accepter ***/
void AddTrait::on_Accpted_clicked()
{
    connexion connecting;
    connecting.CBD();
    QSqlQuery requete;

    /****pour medecin****/
    QString number_Med = ui->lineEdit->text();
    QString name_Med  = ui->lineEdit_6->text();
    QString benefit = ui->lineEdit_4->text();

    /****pour patient****/
    QString number_Pat= ui->lineEdit_5->text();
    QString name_Pat  = ui->lineEdit_8->text();
    QString address = ui->lineEdit_3->text();

    /****pour autre donnée****/
    QString day = ui->lineEdit_2->text();
    QString sum  = ui->lineEdit_7->text();
    QDate date  = ui->dateEdit->date();

    requete.prepare("INSERT INTO traitement(number_Med,name_Med,benefit,number_Pat,name_Pat,address,day,sum,date) VALUES(?,?,?,?,?,?,?,?,?);");

    /****requete medecin****/
    requete.addBindValue(number_Med);
    requete.addBindValue(name_Med);
    requete.addBindValue(benefit);

    /****requete patient****/
    requete.addBindValue(number_Pat);
    requete.addBindValue(name_Pat);
    requete.addBindValue(address);

    /****requete autre donnée****/
    requete.addBindValue(day);
    requete.addBindValue(sum);
    requete.addBindValue(date);

    qDebug() <<requete.exec();
    QMessageBox::information(this, "Data","receive completing");
    hide();
}

