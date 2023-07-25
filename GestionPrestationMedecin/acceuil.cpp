#include "acceuil.h"
#include "ui_acceuil.h"

Acceuil::Acceuil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Acceuil)
{
    setFixedSize(800, 450);
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Acceuil::ouvrirGestionPrestation);
    QPixmap pix("icon/First.png");
    ui->label_pic->setPixmap(pix);
}
void Acceuil::ouvrirGestionPrestation(void)
{
    Ges = new GestionPrestation();
    Ges->show();
    hide();
}

Acceuil::~Acceuil()
{
    delete ui;
}

void Acceuil::on_toolButton_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Are you sure ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        hide();
    }
}
