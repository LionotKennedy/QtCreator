/********************************************************************************
** Form generated from reading UI file 'histogramm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMM_H
#define UI_HISTOGRAMM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_HistoGramm
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HistoGramm)
    {
        if (HistoGramm->objectName().isEmpty())
            HistoGramm->setObjectName(QStringLiteral("HistoGramm"));
        HistoGramm->resize(700, 500);
        HistoGramm->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(HistoGramm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 651, 401));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 420, 131, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(0, 85, 255) ;\n"
"	border-color: rgb(0,85,255);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(0,85,255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,0,255);\n"
"color : rgb(0, 0, 255);\n"
"}*/\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(83, 83, 83);\n"
"	border-color: rgb(83, 83, 83);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(83, 83, 83);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(236, 236, 236);\n"
"}\n"
""));
        HistoGramm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HistoGramm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        HistoGramm->setMenuBar(menubar);
        statusbar = new QStatusBar(HistoGramm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HistoGramm->setStatusBar(statusbar);

        retranslateUi(HistoGramm);

        QMetaObject::connectSlotsByName(HistoGramm);
    } // setupUi

    void retranslateUi(QMainWindow *HistoGramm)
    {
        HistoGramm->setWindowTitle(QApplication::translate("HistoGramm", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HistoGramm", "Closed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HistoGramm: public Ui_HistoGramm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMM_H
