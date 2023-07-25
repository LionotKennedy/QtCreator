#ifndef GESTIONPRESTATION_H
#define GESTIONPRESTATION_H

#include <QMainWindow>
#include "connexiondatabase.h"
#include "QMessageBox"
#include "QStandardItemModel"
#include "QSqlQueryModel"
#include <style.h>

namespace Ui {
class GestionPrestation;
}

class GestionPrestation : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestionPrestation(QWidget *parent = 0);
    class Style style;
    ~GestionPrestation();

private slots:
    void on_pushButton_2_clicked();
    void AffichageDonneeUtilisateurMed();
    void AffichageDonneeUtilisateurPat();
    void AffichageDonneeUtilisateurTrait();
    void AffichageDonneeUtilisateurConsult();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_toolButton_5_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_tableView_3_clicked(const QModelIndex &index);

    void on_bouton_H_clicked();

    void on_bouton_Med_clicked();

    void on_bouton_Pat_clicked();

    void on_bouton_Trait_clicked();

private:
    Ui::GestionPrestation *ui;
    QStandardItemModel *modele;
    QStandardItemModel *modele_1;

    QString id_med;
    QString id_pat;

    QString number;
    QString name;
    QString benefit;
    QString address;

    QString number_Med;
    QString name_Med;
    QString number_Pat;
    QString name_Pat;

    QString day;
    QString sum;
    QString date;
};

#endif // GESTIONPRESTATION_H
