
#include "gestionprestation.h"
#include "ui_gestionprestation.h"

#include "QSqlError"
#include "acceuil.h"

/******FICHIER MEDECIN****/
#include "medadd.h"
#include "medupdate.h"
#include "totalmed.h"

/******FICHIER PATIENT****/
#include "patadd.h"
#include "patupdate.h"
#include "totalpat.h"

/******FICHIER TRAITEMET****/
#include "addtrait.h"
#include "totaltrait.h"

/******FICHIER HISTOGRAMM****/
#include "histogramm.h"

GestionPrestation::GestionPrestation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestionPrestation)
{
    ui->setupUi(this);
    /******style bouton delete medecin******/
    ui->pushButton_4->setDisabled(true);
    ui->pushButton_4->setStyleSheet(style.css);

    /******style bouton delete patient******/
    ui->pushButton_8->setDisabled(true);
    ui->pushButton_8->setStyleSheet(style.css_3);

    /******style bouton delete patient******/
    ui->pushButton_10->setDisabled(true);
    ui->pushButton_10->setStyleSheet(style.css_5);

    /***** style bouton modifier medecins *****/
    ui->pushButton_3->setDisabled(true);
    ui->pushButton_3->setStyleSheet(style.css_7);

    /***** style bouton modifier patient *****/
    ui->pushButton_7->setDisabled(true);
    ui->pushButton_7->setStyleSheet(style.css_9);

    /******connexion au base de donnée******/
    connexion connecting;
    connecting.CBD();

    AffichageDonneeUtilisateurMed();
    AffichageDonneeUtilisateurPat();
    AffichageDonneeUtilisateurTrait();
    AffichageDonneeUtilisateurConsult();

    /******style******/
    setFixedSize(1020, 700);

}

GestionPrestation::~GestionPrestation()
{
    delete ui;
}


/********Add Medecins******/
void GestionPrestation::on_pushButton_2_clicked()
{
    MedAdd *addmed = new MedAdd(this);
    addmed->setModal(true);
    addmed->exec();

    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* qry = new QSqlQuery(connecting.connect);
    qry->prepare("SELECT number,id_med,name,benefit FROM medecin");


    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setColumnHidden(true,1);
    ui->tableView->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/*****Affichage du Donnée Medecins*****/
void GestionPrestation::AffichageDonneeUtilisateurMed()
{
    QSqlQuery requete;
    int ligne(0);
    requete.exec("SELECT count(*) FROM medecin");
    while(requete.next())
    {
        ligne=requete.value(0).toInt();
    }
    modele  = new QStandardItemModel(ligne,4);
    int Row(0);
    requete.exec("SELECT number,id_med,name,benefit FROM medecin");
    while(requete.next())
    {
        for(int i=0;i<4;i++)
        {
            QStandardItem *item = new QStandardItem(requete.value(i).toString());
            modele->setItem(Row,i,item);
        }
        Row++;
    }

    modele->setHeaderData(0,Qt::Horizontal,"  NUMBER  ");
    modele->setHeaderData(1,Qt::Horizontal,"  ID  ");
    modele->setHeaderData(2,Qt::Horizontal,"  NAME  ");
    modele->setHeaderData(3,Qt::Horizontal,"  BENEFIT(Ar)  ");



    ui->tableView->setModel(modele);

    /*code load*/
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* qry = new QSqlQuery(connecting.connect);
    qry->prepare("SELECT number,id_med,name,benefit FROM medecin");


    qry->exec();
    modal->setQuery(*qry);

    ui->tableView->setColumnHidden(true,1);
    ui->tableView->setModel(modal);
}


/********Edit Medecins******/
void GestionPrestation::on_pushButton_3_clicked()
{

    MedUpdate *edit = new MedUpdate(this);
    edit->number = edit->getNumber(this->number);
    edit->name = edit->getName(this->name);
    edit->benefit = edit->getBenefit(this->benefit);
    edit->id_med = edit->getId(this->id_med);

    /***** style bouton modifier medecins *****/
    ui->pushButton_3->setDisabled(true);
    ui->pushButton_3->setStyleSheet(style.css_7);

    edit->setModal(true);
    edit->exec();


    /**load code**/

    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* qry = new QSqlQuery(connecting.connect);
    qry->prepare("SELECT number,id_med,name,benefit FROM medecin");


    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********Select data of table******/
void GestionPrestation::on_tableView_clicked(const QModelIndex &index)
{
    int rowSelected=index.row();

    QString id = ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,1)).toString();

    qDebug()<<id;

            this->id_med= ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,1)).toString();
            this->number= ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,0)).toString();
            this->name= ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,2)).toString();
            this->benefit= ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,3)).toString();

            // ui->tableView->setColumnHidden(true,0);
            qDebug()<<id_med+" "+number+" "+name+" "+benefit;
            ui->pushButton_4->setDisabled(false);
            ui->pushButton_4->setStyleSheet(style.css_2);

            /*** for update ***/
            ui->pushButton_3->setDisabled(false);
            ui->pushButton_3->setStyleSheet(style.css_8);
}



/********Suppression d'un Medecins******/
void GestionPrestation::on_pushButton_4_clicked()
{


    if(QMessageBox::question(this, "Confirmation", "Are you sure to delete this data ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        connexion connecting;
        connecting.CBD();
        QSqlQuery requete;
        ui->pushButton_4->setText(number);

        requete.prepare("DELETE FROM medecin WHERE number='"+ui->pushButton_4->text()+"'");
        requete.addBindValue(number);
        requete.addBindValue(name);
        requete.addBindValue(benefit);
        qDebug()<<requete.exec();
        qDebug()<<requete.lastError();

        QMessageBox::warning(this, "Delete of database","You have been to delete this data");

        ui->pushButton_4->setText("Delete");
    }


 /******load for delete medecin******/

     QSqlQueryModel *modal = new QSqlQueryModel();


     connexion connecting;
     connecting.connectingOpen();
     QSqlQuery* qry = new QSqlQuery(connecting.connect);
     qry->prepare("SELECT number,id_med,name,benefit FROM medecin");


     qry->exec();
     modal->setQuery(*qry);
     ui->tableView->setModel(modal);


     connecting.connectingClose();
     qDebug() << (modal->rowCount());
     ui->pushButton_4->setDisabled(true);
     ui->pushButton_4->setStyleSheet(style.css);

}


/********Actualisation du fichier Medecin******/
void GestionPrestation::on_pushButton_clicked()
{
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* qry = new QSqlQuery(connecting.connect);
    qry->prepare("SELECT number,name,benefit FROM medecin");


    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setColumnHidden(true,0);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********Ajouter nouvelle Patient******/
void GestionPrestation::on_pushButton_6_clicked()
{
    PatAdd *ajout = new PatAdd(this);
    ajout->setModal(true);
    ajout->exec();


    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT number,id_pat,name,address FROM patient");


    requete->exec();
    modal->setQuery(*requete);
    ui->tableView_2->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());

}



/*****Affichage du Donnée Patients*****/
void GestionPrestation::AffichageDonneeUtilisateurPat()
{
    QSqlQuery requete;
    int ligne(0);
    requete.exec("SELECT count(*) FROM patient");
    while(requete.next())
    {
        ligne=requete.value(0).toInt();
    }
    modele_1  = new QStandardItemModel(ligne,4);
    int Row(0);
    requete.exec("SELECT number,id_pat,name,address FROM patient");
    while(requete.next())
    {
        for(int j=0;j<4;j++)
        {
            QStandardItem *item = new QStandardItem(requete.value(j).toString());
            modele_1->setItem(Row,j,item);
        }
        Row++;
    }
    modele_1->setHeaderData(0,Qt::Horizontal,"  NUMBER   ");
    modele_1->setHeaderData(1,Qt::Horizontal,"  ID  ");
    modele_1->setHeaderData(2,Qt::Horizontal,"  NAME  ");
    modele_1->setHeaderData(3,Qt::Horizontal,"  ADDRESS  ");

    ui->tableView_2->setModel(modele_1);


    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* qry = new QSqlQuery(connecting.connect);
    qry->prepare("SELECT number,id_pat,name,address FROM patient");


    qry->exec();
    modal->setQuery(*qry);

    ui->tableView_2->setColumnHidden(true,1);
    ui->tableView_2->setModel(modal);
}


/********Modifier la liste Patient******/
void GestionPrestation::on_pushButton_7_clicked()
{
    PatUpdate *edit = new PatUpdate(this);
    edit->number = edit->getNumber(this->number);
    edit->name = edit->getName(this->name);
    edit->address = edit->getAddress(this->address);
    edit->id_pat = edit->getId(this->id_pat);

    /***** style bouton modifier patient *****/
    ui->pushButton_7->setDisabled(true);
    ui->pushButton_7->setStyleSheet(style.css_9);

    edit->setModal(true);
    edit->exec();

    /**load code**/

    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT number,id_pat,name,address FROM patient");


    requete->exec();
    modal->setQuery(*requete);
    ui->tableView_2->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********selection de le liste patient******/
void GestionPrestation::on_tableView_2_clicked(const QModelIndex &index)
{
    int rowSelected=index.row();

    QString num = ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,0)).toString();

    qDebug()<<num;

            this->number= ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,0)).toString();
            this->id_pat= ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,1)).toString();
            this->name= ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,2)).toString();
            this->address= ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,3)).toString();


            qDebug()<<id_pat+" "+number +" "+name+" "+address;
            ui->pushButton_8->setDisabled(false);
            ui->pushButton_8->setStyleSheet(style.css_4);

            /*** For update ***/
            ui->pushButton_7->setDisabled(false);
            ui->pushButton_7->setStyleSheet(style.css_10);
}
/********supprimer la liste Patient******/
void GestionPrestation::on_pushButton_8_clicked()
{

    if(QMessageBox::question(this, "Confirmation", "Are you sure to delete this data ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        connexion connecting;
        connecting.CBD();
        QSqlQuery requete;
        ui->pushButton_8->setText(number);

        requete.prepare("DELETE FROM patient WHERE number='"+ui->pushButton_8->text()+"'");
        requete.addBindValue(number);
        requete.addBindValue(name);
        requete.addBindValue(address);
        qDebug()<<requete.exec();
        qDebug()<<requete.lastError();

        QMessageBox::warning(this, "Delete of database","You have been to delete a data");

        ui->pushButton_8->setText("Delete");
    }


 /******load for delete patient******/

     QSqlQueryModel *modal = new QSqlQueryModel();

     connexion connecting;
     connecting.connectingOpen();
     QSqlQuery* qry = new QSqlQuery(connecting.connect);
     qry->prepare("SELECT number,id_pat,name,address FROM patient");


     qry->exec();
     modal->setQuery(*qry);
     ui->tableView->setColumnHidden(true,1);
     ui->tableView_2->setModel(modal);


     connecting.connectingClose();
     qDebug() << (modal->rowCount());
     ui->pushButton_8->setDisabled(true);
     ui->pushButton_8->setStyleSheet(style.css_3);
}


/********Actualisation du fichier Patient******/
void GestionPrestation::on_pushButton_5_clicked()
{
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT number,id_pat,name,address FROM patient");


    requete->exec();
    modal->setQuery(*requete);
    ui->tableView_2->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********Ajouter Traitement******/
void GestionPrestation::on_pushButton_9_clicked()
{
    AddTrait *edit = new AddTrait(this);
    edit->setModal(true);
    edit->exec();

    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,address,day,sum FROM traitement");


    requete->exec();
    modal->setQuery(*requete);
    ui->tableView_3->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********Affichage du liste du traitement******/
void GestionPrestation::AffichageDonneeUtilisateurTrait()
{
    QSqlQuery requete;
    int ligne(0);
    requete.exec("SELECT count(*) FROM traitement");
    while(requete.next())
    {
        ligne=requete.value(0).toInt();
    }
    modele  = new QStandardItemModel(ligne,8);
    int Row(0);
    requete.exec("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,address,day,sum FROM traitement");
    while(requete.next())
    {
        for(int k=0;k<8;k++)
        {
            QStandardItem *item = new QStandardItem(requete.value(k).toString());
            modele->setItem(Row,k,item);
        }
        Row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"  NUMBER(Med)   ");
    modele->setHeaderData(1,Qt::Horizontal,"  NAME(Med)  ");
    modele->setHeaderData(2,Qt::Horizontal,"  BENEFIT(Ar)  ");

    modele->setHeaderData(3,Qt::Horizontal,"  NUMBER(Pat)   ");
    modele->setHeaderData(4,Qt::Horizontal,"  NAME(Pat)  ");
    modele->setHeaderData(5,Qt::Horizontal,"  ADDRESS  ");

    modele->setHeaderData(6,Qt::Horizontal,"  DAY   ");
    modele->setHeaderData(7,Qt::Horizontal,"  SUM(Ar)  ");

    ui->tableView_3->setModel(modele);
}


/********seletion la liste Traitement******/
void GestionPrestation::on_tableView_3_clicked(const QModelIndex &index)
{
    int rowSelected=index.row();

    QString num = ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,0)).toString();

    qDebug()<<num;

            this->number_Med= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,0)).toString();
            this->name_Med= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,1)).toString();
            this->benefit= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,2)).toString();

            this->number_Pat= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,3)).toString();
            this->name_Pat= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,4)).toString();
            this->address= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,5)).toString();

            this->day= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,6)).toString();
            this->sum= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,7)).toString();
            this->date= ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,8)).toString();


            qDebug()<<number_Med +" "+name_Med+" "+benefit+" "+number_Pat+" "+name_Pat+" "+address+" "+day+" "+sum+" "+date;
            ui->pushButton_10->setDisabled(false);
            ui->pushButton_10->setStyleSheet(style.css_6);
}

/********supprimer la liste Traitement******/
void GestionPrestation::on_pushButton_10_clicked()
{
   // DeleteTrait *deletetrait = new DeleteTrait();
    //deletetrait->show();


    if(QMessageBox::question(this, "Confirmation", "Do you sure to delete this data ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        connexion connecting;
        connecting.CBD();
        QSqlQuery requete;
        ui->pushButton_10->setText(day);

        requete.prepare("DELETE FROM traitement WHERE day='"+ui->pushButton_10->text()+"'");
        requete.addBindValue(number_Med);
        requete.addBindValue(name_Med);
        requete.addBindValue(benefit);

        requete.addBindValue(number_Pat);
        requete.addBindValue(name_Pat);
        requete.addBindValue(address);

        requete.addBindValue(day);
        requete.addBindValue(sum);
        requete.addBindValue(date);

        qDebug()<<requete.exec();
        qDebug()<<requete.lastError();

        QMessageBox::warning(this, "Delete of database","You have been to delete a data");

        ui->pushButton_10->setText("Delete");

    }

 /******load for delete traitement******/

     QSqlQueryModel *modal = new QSqlQueryModel();


     connexion connecting;
     connecting.connectingOpen();
     QSqlQuery* qry = new QSqlQuery(connecting.connect);
     qry->prepare("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,address,day,sum FROM traitement");


     qry->exec();
     modal->setQuery(*qry);
     ui->tableView_3->setModel(modal);


     connecting.connectingClose();
     qDebug() << (modal->rowCount());
     ui->pushButton_10->setDisabled(true);
     ui->pushButton_10->setStyleSheet(style.css_5);
}


/********Actualise la liste Traitement******/
void GestionPrestation::on_pushButton_11_clicked()
{
      connexion connecting;
      QSqlQueryModel *modal = new QSqlQueryModel();

      connecting.connectingOpen();
      QSqlQuery* requete = new QSqlQuery(connecting.connect);
      requete->prepare("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,address,day,sum FROM traitement");


      requete->exec();
      modal->setQuery(*requete);
      ui->tableView_3->setModel(modal);


      connecting.connectingClose();
      qDebug() << (modal->rowCount());

}


/********Affichage du liste de la consultation******/
void GestionPrestation::AffichageDonneeUtilisateurConsult()
{
    QSqlQuery requete;
    int ligne(0);
    requete.exec("SELECT count(*) FROM traitement");
    while(requete.next())
    {
        ligne=requete.value(0).toInt();
    }
    modele  = new QStandardItemModel(ligne,6);
    int Row(0);
    requete.exec("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,date FROM traitement");
    while(requete.next())
    {
        for(int l=0;l<6;l++)
        {
            QStandardItem *item = new QStandardItem(requete.value(l).toString());
            modele->setItem(Row,l,item);
        }
        Row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"  NUMBER(Med)   ");
    modele->setHeaderData(1,Qt::Horizontal,"  NAME(Med)  ");
    modele->setHeaderData(2,Qt::Horizontal,"  BENEFIT(Ar)  ");

    modele->setHeaderData(3,Qt::Horizontal,"  NUMBER(Pat)   ");
    modele->setHeaderData(4,Qt::Horizontal,"  NAME(Pat)  ");

    modele->setHeaderData(5,Qt::Horizontal,"  DATE  ");

    ui->tableView_4->setModel(modele);

/********Actualisation automatique du liste de la consultation******/
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete_1 = new QSqlQuery(connecting.connect);
    requete_1->prepare("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,date FROM traitement");


    requete_1->exec();
    modal->setQuery(*requete_1);
    ui->tableView_4->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********Actualisation du liste de la consultation******/
void GestionPrestation::on_pushButton_12_clicked()
{
    connexion connecting;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connecting.connectingOpen();
    QSqlQuery* requete = new QSqlQuery(connecting.connect);
    requete->prepare("SELECT number_Med,name_Med,benefit,number_Pat,name_Pat,date FROM traitement");


    requete->exec();
    modal->setQuery(*requete);
    ui->tableView_4->setModel(modal);


    connecting.connectingClose();
    qDebug() << (modal->rowCount());
}


/********Quitter******/
/********Mbo tsy mety soa******/
void GestionPrestation::on_toolButton_5_clicked()
{
   // this->lose();
    Acceuil *retour = new Acceuil(this);
    retour->show();
    hide();
}

void GestionPrestation::on_bouton_H_clicked()
{
    HistoGramm *histogramm = new HistoGramm(this);
    histogramm->show();
}

void GestionPrestation::on_bouton_Med_clicked()
{

    DeleteMed *totalM = new DeleteMed(this);
    totalM->show();
}

void GestionPrestation::on_bouton_Pat_clicked()
{
    DeletePat *totalP = new DeletePat(this);
    totalP->show();
}

void GestionPrestation::on_bouton_Trait_clicked()
{
    DeleteTrait *totalT =  new DeleteTrait(this);
    totalT->show();
}
