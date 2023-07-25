#ifndef ACCEUIL_H
#define ACCEUIL_H

#include <QMainWindow>

#include "gestionprestation.h"

namespace Ui {
class Acceuil;
}

class Acceuil : public QMainWindow
{
    Q_OBJECT

public:
    explicit Acceuil(QWidget *parent = 0);
    ~Acceuil();

private:
    Ui::Acceuil *ui;
    GestionPrestation *Ges;
private slots:
    void ouvrirGestionPrestation (void);
    void on_toolButton_clicked();
};

#endif // ACCEUIL_H
