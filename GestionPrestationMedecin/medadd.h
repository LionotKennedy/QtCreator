#ifndef MEDADD_H
#define MEDADD_H

#include <QDialog>

namespace Ui {
class MedAdd;
}

class MedAdd : public QDialog
{
    Q_OBJECT

public:
    explicit MedAdd(QWidget *parent = 0);
    ~MedAdd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MedAdd *ui;
};

#endif // MEDADD_H
