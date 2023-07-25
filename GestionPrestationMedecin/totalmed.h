#ifndef DELETEMED_H
#define DELETEMED_H

#include <QMainWindow>

namespace Ui {
class DeleteMed;
}

class DeleteMed : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteMed(QWidget *parent = 0);
    ~DeleteMed();

private slots:
    void on_pushButton_clicked();

    void SumMed();



private:
    Ui::DeleteMed *ui;
};

#endif // DELETEMED_H
