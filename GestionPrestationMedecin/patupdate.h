#ifndef PATUPDATE_H
#define PATUPDATE_H

#include <QDialog>

namespace Ui {
class PatUpdate;
}

class PatUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit PatUpdate(QWidget *parent = 0);

    QString getNumber(QString number);
    QString getName(QString name);
    QString getAddress(QString address);

    QString getId(QString id_pat);
    QString id_pat;

    QString number;
    QString name;
    QString address;

    QString Id;

    ~PatUpdate();

private slots:
    void on_pushButton_clicked();

    void on_yes_clicked();

private:
    Ui::PatUpdate *ui;
};

#endif // PATUPDATE_H
