#ifndef DELETETRAIT_H
#define DELETETRAIT_H

#include <QMainWindow>

namespace Ui {
class DeleteTrait;
}

class DeleteTrait : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteTrait(QWidget *parent = 0);
    ~DeleteTrait();

private slots:
    void on_pushButton_clicked();

    void  SumT();
    void Day();

private:
    Ui::DeleteTrait *ui;
};

#endif // DELETETRAIT_H
