#ifndef MEDUPDATE_H
#define MEDUPDATE_H

#include <QDialog>

namespace Ui {
class MedUpdate;
}

class MedUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit MedUpdate(QWidget *parent = 0);

    QString getNumber(QString number);
    QString getName(QString name);
    QString getBenefit(QString benefit);

    QString getId(QString id_med);
    QString id_med;

    QString number;
    QString name;
    QString benefit;

    QString Id;

    ~MedUpdate();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MedUpdate *ui;
};

#endif // MEDUPDATE_H
