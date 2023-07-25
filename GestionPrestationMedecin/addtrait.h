#ifndef ADDTRAIT_H
#define ADDTRAIT_H

#include <QDialog>

namespace Ui {
class AddTrait;
}

class AddTrait : public QDialog
{
    Q_OBJECT

public:
    explicit AddTrait(QWidget *parent = 0);
    ~AddTrait();

private slots:
    void on_Accpted_clicked();

    void on_refuse_clicked();

    void on_medecin_currentIndexChanged(const QString &arg1);

    void on_patient_currentIndexChanged(const QString &arg1);

private:
    Ui::AddTrait *ui;
};

#endif // ADDTRAIT_H
