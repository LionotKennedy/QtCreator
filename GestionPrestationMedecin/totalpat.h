#ifndef DELETEPAT_H
#define DELETEPAT_H

#include <QMainWindow>

namespace Ui {
class DeletePat;
}

class DeletePat : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeletePat(QWidget *parent = 0);
    ~DeletePat();

private slots:
    void on_pushButton_clicked();

    void SumPat();


private:
    Ui::DeletePat *ui;
};

#endif // DELETEPAT_H
