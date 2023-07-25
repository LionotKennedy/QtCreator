#include "histogramm.h"
#include "ui_histogramm.h"
#include "gestionprestation.h"
#include "connexiondatabase.h"

HistoGramm::HistoGramm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HistoGramm)
{
    ui->setupUi(this);
    /**** Function ****/
    code_2();
    code_1();
    /******style******/
    setFixedSize(700, 500);

}

HistoGramm::~HistoGramm()
{
    delete ui;
}

/**** Histogramm Code ****/
void HistoGramm::code_1()
{
    ui->widget->addGraph();
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle::ssDisc);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsStepRight);
    ui->widget->xAxis->setLabel("Medecin (MED)");
    ui->widget->yAxis->setLabel("Benefit (Ar)");
    ui->widget->xAxis->setRange(-6000, 100);
    ui->widget->yAxis->setRange(-6000, 8000);

    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
/**/

    ui->widget->graph(0)->setData(id,taux);
    ui->widget->rescaleAxes();
    ui->widget->replot();
    ui->widget->update();
}


void HistoGramm::code_2()
{
    // configure axis rect:
      ui->widget->plotLayout()->clear(); // clear default axis rect so we can start from scratch
      QCPAxisRect *wideAxisRect = new QCPAxisRect(ui->widget);
      wideAxisRect->setupFullAxesBox(true);
      wideAxisRect->axis(QCPAxis::atRight, 0)->setTickLabels(true);
      wideAxisRect->addAxis(QCPAxis::atLeft)->setTickLabelColor(QColor("#6050F8")); // add an extra axis on the left and color its numbers
      QCPLayoutGrid *subLayout = new QCPLayoutGrid;
      ui->widget->plotLayout()->addElement(0, 0, wideAxisRect); // insert axis rect in first row
      ui->widget->plotLayout()->addElement(1, 0, subLayout); // sub layout in second row (grid layout will grow accordingly)

      ui->widget->plotLayout()->setRowStretchFactor(1, 2);
      // prepare axis rects that will be placed in the sublayout:
      QCPAxisRect *subRectLeft = new QCPAxisRect(ui->widget, false); // false means to not setup default axes
      QCPAxisRect *subRectRight = new QCPAxisRect(ui->widget, false);
      subLayout->addElement(0, 0, subRectLeft);
      subLayout->addElement(0, 1, subRectRight);
      subRectRight->setMaximumSize(150, 150); // make bottom right axis rect size fixed 150x150
      subRectRight->setMinimumSize(150, 150); // make bottom right axis rect size fixed 150x150

      // setup axes in sub layout axis rects:
      subRectLeft->addAxes(QCPAxis::atBottom | QCPAxis::atLeft);
      subRectRight->addAxes(QCPAxis::atBottom | QCPAxis::atRight);
      subRectLeft->axis(QCPAxis::atLeft)->ticker()->setTickCount(2);
      subRectRight->axis(QCPAxis::atRight)->ticker()->setTickCount(2);
      subRectRight->axis(QCPAxis::atBottom)->ticker()->setTickCount(2);
      subRectLeft->axis(QCPAxis::atBottom)->grid()->setVisible(true);

      // synchronize the left and right margins of the top and bottom axis rects:
      QCPMarginGroup *marginGroup = new QCPMarginGroup(ui->widget);
      subRectLeft->setMarginGroup(QCP::msLeft, marginGroup);
      subRectRight->setMarginGroup(QCP::msRight, marginGroup);
      wideAxisRect->setMarginGroup(QCP::msLeft | QCP::msRight, marginGroup);

      // move newly created axes on "axes" layer and grids on "grid" layer:
     foreach (QCPAxisRect *rect, ui->widget->axisRects())
      {
        foreach (QCPAxis *axis, rect->axes())
        {
          axis->setLayer("axes");
          axis->grid()->setLayer("grid");
        }
      }

      // prepare data:
      QVector<QCPGraphData> dataCos(21), /*dataGauss(50),*/ dataRandom(100);
      //QVector<double> x3, y3;
      qsrand(3);
      for (int i=0; i<dataCos.size(); ++i)
      {
        dataCos[i].key = i/(double)(dataCos.size()-1)*10-5.0;
        dataCos[i].value = qCos(dataCos[i].key);
      }

      for (int i=0; i<dataRandom.size(); ++i)
      {
        dataRandom[i].key = i/(double)dataRandom.size()*10;
        dataRandom[i].value = qrand()/(double)RAND_MAX-0.5+dataRandom[qMax(0, i-1)].value;
      }

      // create and configure plottables:

      QCPGraph *mainGraphCos = ui->widget->addGraph(wideAxisRect->axis(QCPAxis::atBottom), wideAxisRect->axis(QCPAxis::atLeft));
      //mainGraphCos->data()->set(dataCos);
      mainGraphCos->setData(id, taux);
      //mainGraphCos->valueAxis()->setRange(-1, 1);
      mainGraphCos->rescaleKeyAxis();

      mainGraphCos->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, QPen(Qt::black), QBrush(Qt::white), 6));
      //mainGraphCos->setPen(QPen(QColor(120, 120, 120), 5));

      QCPGraph *mainGraphGauss = ui->widget->addGraph(wideAxisRect->axis(QCPAxis::atBottom), wideAxisRect->axis(QCPAxis::atLeft, 1));

      //mainGraphGauss->data()->set(dataGauss);
      //mainGraphGauss->setPen(QPen(QColor("#8070B8"), 2));
      //mainGraphGauss->setBrush(QColor(110, 170, 110, 30));

      //mainGraphCos->setChannelFillGraph(mainGraphGauss);
      mainGraphCos->setBrush(QColor(255, 161, 0, 50));

      //mainGraphGauss->valueAxis()->setRange(0, 1000);
      mainGraphGauss->rescaleKeyAxis();

      QCPGraph *subGraphRandom = ui->widget->addGraph(subRectLeft->axis(QCPAxis::atBottom), subRectLeft->axis(QCPAxis::atLeft));
      subGraphRandom->data()->set(dataRandom);
      //subGraphRandom->setLineStyle(QCPGraph::lsImpulse);
      //subGraphRandom->setData(id, taux);
      subGraphRandom->setPen(QPen(QColor("#FFA100"), 1.5));
      subGraphRandom->setBrush(QColor(255, 161, 0, 50));
      subGraphRandom->rescaleAxes();

      QCPBars *subBars = new QCPBars(subRectRight->axis(QCPAxis::atBottom), subRectRight->axis(QCPAxis::atRight));
      subBars->setWidth(3/(double)id.size());
      subBars->setData(id, taux);
      subBars->setPen(QPen(Qt::black));
      subBars->setAntialiased(false);
      subBars->setAntialiasedFill(false);
      subBars->setBrush(QColor("#705BE8"));
      subBars->keyAxis()->setSubTicks(false);
      subBars->rescaleAxes();

      // setup a ticker for subBars key axis that only gives integer ticks:
      QSharedPointer<QCPAxisTickerFixed> intTicker(new QCPAxisTickerFixed);
      intTicker->setTickStep(1.0);
      intTicker->setScaleStrategy(QCPAxisTickerFixed::ssMultiples);
      subBars->keyAxis()->setTicker(intTicker);
}

/***** closed button *****/
void HistoGramm::on_pushButton_clicked()
{
    if(QMessageBox::question(this, "Confirmation", "Do you want to close its ?",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        hide();
    }
}
