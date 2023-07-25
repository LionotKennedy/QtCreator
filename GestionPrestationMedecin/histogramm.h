#ifndef HISTOGRAMM_H
#define HISTOGRAMM_H

#include <QMainWindow>

#include <QVector>
namespace Ui {
class HistoGramm;
}

class HistoGramm : public QMainWindow
{
    Q_OBJECT

public:
    explicit HistoGramm(QWidget *parent = 0);
    ~HistoGramm();
private slots:

    void code_1();

    void code_2();


    void on_pushButton_clicked();

private:
    Ui::HistoGramm *ui;
    QVector<double> id = {1,2,3,4,5}, taux = {4,6,8,2,5};
};

#endif // HISTOGRAMM_H
