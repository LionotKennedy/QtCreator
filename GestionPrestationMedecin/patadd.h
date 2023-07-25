#ifndef PATADD_H
#define PATADD_H

#include <QDialog>

namespace Ui {
class PatAdd;
}

class PatAdd : public QDialog
{
    Q_OBJECT

public:
    explicit PatAdd(QWidget *parent = 0);
    ~PatAdd();

private slots:
    void on_refuse_clicked();

    void on_accepeted_clicked();

private:
    Ui::PatAdd *ui;
};

#endif // PATADD_H
