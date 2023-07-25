/********************************************************************************
** Form generated from reading UI file 'gestionprestation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONPRESTATION_H
#define UI_GESTIONPRESTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionPrestation
{
public:
    QAction *actioncon;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QToolButton *toolButton_3;
    QLabel *label_7;
    QWidget *tab_2;
    QTableView *tableView_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_4;
    QLabel *label_5;
    QToolButton *toolButton_6;
    QWidget *tab_3;
    QTableView *tableView_3;
    QLabel *label_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QToolButton *toolButton_2;
    QLabel *label_9;
    QWidget *tab_4;
    QTableView *tableView_4;
    QLabel *label_8;
    QPushButton *pushButton_12;
    QToolButton *toolButton;
    QLabel *label_10;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QPushButton *bouton_H;
    QPushButton *bouton_Med;
    QPushButton *bouton_Trait;
    QPushButton *bouton_Pat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GestionPrestation)
    {
        if (GestionPrestation->objectName().isEmpty())
            GestionPrestation->setObjectName(QStringLiteral("GestionPrestation"));
        GestionPrestation->resize(1020, 731);
        GestionPrestation->setStyleSheet(QStringLiteral("	/**/font: 8pt \"Segoe Script\";"));
        actioncon = new QAction(GestionPrestation);
        actioncon->setObjectName(QStringLiteral("actioncon"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../image/icon/report_clipboard_medical_checklist_healthcare_icon_133525.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncon->setIcon(icon);
        centralWidget = new QWidget(GestionPrestation);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(140, 10, 870, 660));
        tabWidget->setStyleSheet(QLatin1String("QTabBar\n"
"\n"
"{	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), 		stop:1 rgba(255, 255, 255, 255));\n"
"	color: rgb(0, 0, 0);\n"
"	gridline-color: rgb(255, 0, 0);\n"
"    font: 16pt \"Snap ITC\";\n"
"	border-radius: 25px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 100, 711, 511));
        tableView->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"	\n"
"	font: 12pt \"Segoe Script\";\n"
"}"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setDefaultSectionSize(231);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 100, 131, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 85, 255) ;\n"
"	border-color: rgb(0,85,255);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(0,85,255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,0,255);\n"
"color : rgb(0, 0, 255);\n"
"}\n"
"/*\n"
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
"	background-color: rgb(220, 220, 220);\n"
"}\n"
"*/	"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-Goroup_4-Desktop_Qt_5_9_0_MinGW_32bit-Debug/icon/rotation.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(35, 35));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 500, 131, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(0, 170, 0) ;\n"
"	border-color: rgb(0,170,0);\n"
"	border-style: solid 5px;\n"
"	border : 2px solid rgb(0,170,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,255,0);\n"
"color : rgb(0, 255, 0);\n"
"}*/\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	/*color:rgb(95, 90, 255);*/\n"
"	color : rgb(0, 85, 255) ;\n"
"	border-color: rgb(0,85,255);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(0,85,255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,0,255);\n"
"color : rgb(0, 0, 255);\n"
"}\n"
"/*\n"
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
""
                        "	border : 1px solid rgb(83, 83, 83);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(220, 220, 220);\n"
"}\n"
"*/	"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-Goroup_4-Desktop_Qt_5_9_0_MinGW_32bit-Debug/icon/live_messenger_alt_3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(35, 35));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 540, 131, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(85, 0,0) ;\n"
"	border-color: rgb(85, 0, 0);\n"
"	border-style: solid 5px;\n"
"	border : 2px solid rgb(85, 0,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(170, 0, 0);\n"
"color : rgb(170, 0, 0);\n"
"}*/\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 85, 255) ;\n"
"	border-color: rgb(0,85,255);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(0,85,255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,0,255);\n"
"color : rgb(0, 0, 255);\n"
"}\n"
"/*\n"
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
"	border : 1px solid rgb(83, 83,"
                        " 83);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(220, 220, 220);\n"
"}\n"
"	*//*\n"
"background-color: rgb(95, 90, 255);*/"));
        pushButton_3->setIconSize(QSize(100, 100));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(730, 580, 131, 31));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(255, 0, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	/*background-color: rgb(255, 255, 255);\n"
"	\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-style: solid 5px;*/\n"
"	border : 2px solid rgb(202, 0, 0);color: rgb(202, 0, 0);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-Goroup_4-Desktop_Qt_5_9_0_MinGW_32bit-Debug/icon/recycle_bin_full.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(35, 35));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 50, 411, 20));
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"		/*background-color: rgb(255, 0, 0);\n"
"		border-radius: 50px;*/\n"
"		border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:4px solid rgb(255, 0, 0);\n"
"}"));
        toolButton_3 = new QToolButton(tab);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(130, 10, 91, 81));
        toolButton_3->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	/*background-color: rgb(255, 0, 0);*/\n"
"	border-radius: 15px;\n"
"	font: 14pt \"Snap ITC\";\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../icon/nurse.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon4);
        toolButton_3->setIconSize(QSize(500, 500));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 20, 321, 31));
        label_7->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	\n"
"	font: 30pt \"Old English Text MT\";\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 120, 701, 491));
        tableView_2->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"	\n"
"	font: 12pt \"Segoe Script\";\n"
"}"));
        tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_2->horizontalHeader()->setDefaultSectionSize(227);
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(730, 120, 131, 31));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
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
"}"));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(35, 35));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(730, 500, 131, 31));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(0, 170, 0) ;\n"
"	border-color: rgb(0,170,0);\n"
"	border-style: solid 5px;\n"
"	border : 2px solid rgb(0,170,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,255,0);\n"
"color : rgb(0, 255, 0);\n"
"}*/\n"
"\n"
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
"}"));
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(35, 35));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(730, 540, 131, 31));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(85, 0,0) ;\n"
"	border-color: rgb(85, 0, 0);\n"
"	border-style: solid 5px;\n"
"	border : 2px solid rgb(85, 0,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(170, 0, 0);\n"
"color : rgb(170, 0, 0);\n"
"}*/\n"
"\n"
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
"}"));
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(730, 580, 131, 31));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(255, 0, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(202,0,0);\n"
"color : rgb(202,0,0);\n"
"}"));
        pushButton_8->setIcon(icon3);
        pushButton_8->setIconSize(QSize(35, 35));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 60, 391, 20));
        label_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	/*	background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 170, 255);\n"
"		border-radius: 50px;*/\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:3px solid skyblue;\n"
"}"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 20, 331, 41));
        label_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"font: 30pt \"Old English Text MT\";\n"
"}"));
        toolButton_6 = new QToolButton(tab_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(120, 20, 91, 71));
        toolButton_6->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	/*	background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 170, 255);*/\n"
"		border-radius: 50px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../icon/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon5);
        toolButton_6->setIconSize(QSize(1000, 1000));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 110, 851, 451));
        tableView_3->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"	\n"
"	font: 12pt \"Segoe Script\";\n"
"}"));
        tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_3->horizontalHeader()->setDefaultSectionSize(104);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 60, 411, 20));
        label_6->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	/*	background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 170, 255);\n"
"		border-radius: 50px;\n"
"		\n"
"	background-color: rgb(0, 255, 0);*/\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:4px solid rgb(255, 0, 0);\n"
"}"));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 580, 151, 31));
        QFont font;
        font.setFamily(QStringLiteral("Snap ITC"));
        font.setPointSize(16);
        pushButton_9->setFont(font);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(0, 170, 0) ;\n"
"	border-color: rgb(0,170,0);\n"
"	border-style: solid 5px;\n"
"	border : 2px solid rgb(0,170,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(0,255,0);\n"
"color : rgb(0, 255, 0);\n"
"}*/\n"
"\n"
"\n"
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
"}"));
        pushButton_9->setIcon(icon2);
        pushButton_9->setIconSize(QSize(35, 35));
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(720, 580, 131, 31));
        pushButton_10->setFont(font);
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font: 16pt \"Snap ITC\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(255, 0, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border : 2px solid rgb(202,0,0);\n"
"color : rgb(202,0,0);\n"
"}"));
        pushButton_10->setIcon(icon3);
        pushButton_10->setIconSize(QSize(35, 35));
        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(380, 580, 111, 31));
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton\n"
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
"}"));
        pushButton_11->setIcon(icon1);
        pushButton_11->setIconSize(QSize(35, 35));
        toolButton_2 = new QToolButton(tab_3);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(80, 20, 101, 81));
        toolButton_2->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	/*background-color: rgb(255, 0, 0);*/\n"
"	border-radius: 15px;\n"
"	font: 14pt \"Snap ITC\";\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../image/icon/istockphoto-469948180-1024x1024.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon6);
        toolButton_2->setIconSize(QSize(150, 150));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 20, 531, 41));
        label_9->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	font: 19.5pt \"Old English Text MT\";\n"
"\n"
"}"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(10, 90, 841, 481));
        tableView_4->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"	\n"
"	font: 12pt \"Segoe Script\";\n"
"}"));
        tableView_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_4->horizontalHeader()->setDefaultSectionSize(137);
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 50, 431, 20));
        label_8->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	/*	background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 170, 255);\n"
"		border-radius: 50px;\n"
"background-color: rgb(0, 255, 0);\n"
"	background-color: rgb(255, 255, 0);*/\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:3px solid skyblue;\n"
"		\n"
"	\n"
"}"));
        pushButton_12 = new QPushButton(tab_4);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(740, 580, 111, 31));
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton\n"
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
"}"));
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(35, 35));
        toolButton = new QToolButton(tab_4);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(130, 10, 101, 71));
        toolButton->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	/*background-color: rgb(255, 0, 0);*/\n"
"	border-radius: 15px;\n"
"	font: 14pt \"Snap ITC\";\n"
"}"));
        QIcon icon7;
        QString iconThemeName = QStringLiteral("rapport");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QStringLiteral("../icon/rapport.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        toolButton->setIcon(icon7);
        toolButton->setIconSize(QSize(150, 150));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 20, 471, 41));
        label_10->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"font: 19.5pt \"Old English Text MT\";	\n"
"}"));
        tabWidget->addTab(tab_4, QString());
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(20, 0, 81, 91));
        toolButton_4->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	/*background-color: rgb(255, 0, 0);*/\n"
"	border-radius: 15px;\n"
"	font: 14pt \"Snap ITC\";\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../build-Goroup_4-Desktop_Qt_5_9_0_MinGW_32bit-Debug/icon/briefcase.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon8);
        toolButton_4->setIconSize(QSize(150, 150));
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(40, 600, 51, 51));
        toolButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_5->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	/*background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(61, 61, 61);*/\n"
"	/*background-color: rgb(255,255, 255);\n"
"	background-color: rgb(255, 171, 165);*/\n"
"	border-radius : 25px;\n"
"	background-color: rgb(229, 229, 229);\n"
"}\n"
"\n"
"QToolButton:hover\n"
"\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(236, 236, 236);\n"
"}\n"
"	"));
        toolButton_5->setIconSize(QSize(200, 200));
        bouton_H = new QPushButton(centralWidget);
        bouton_H->setObjectName(QStringLiteral("bouton_H"));
        bouton_H->setGeometry(QRect(10, 550, 111, 31));
        bouton_H->setCursor(QCursor(Qt::PointingHandCursor));
        bouton_H->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
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
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"	color: rgb(83, 83, 83);\n"
"	/*background-color: rgb(255, 255, 255);\n"
"	\n"
"	border-color: rgb(83, 83, 83);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(83, 83, 83);\n"
"	border-radius: 10px;*/\n"
"\n"
"	border-top: none;\n"
"	border-rigth: none;\n"
"	border-left: none;	\n"
"	border-bottom: none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(236, 236, 236);\n"
"	border-radius: 10"
                        "px;\n"
"}\n"
"	"));
        bouton_Med = new QPushButton(centralWidget);
        bouton_Med->setObjectName(QStringLiteral("bouton_Med"));
        bouton_Med->setGeometry(QRect(10, 430, 111, 31));
        bouton_Med->setCursor(QCursor(Qt::PointingHandCursor));
        bouton_Med->setStyleSheet(QLatin1String("/*QPushButton\n"
"\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
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
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"	color: rgb(83, 83, 83);\n"
"	/*background-color: rgb(255, 255, 255);\n"
"	\n"
"	border-color: rgb(83, 83, 83);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(83, 83, 83);\n"
"	border-radius: 10px;*/\n"
"\n"
"	border-top: none;\n"
"	border-rigth: none;\n"
"	border-left: none;	\n"
"	border-bottom: none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(236, 236, 236);\n"
"	border-"
                        "radius: 10px;\n"
"}\n"
"	\n"
""));
        bouton_Trait = new QPushButton(centralWidget);
        bouton_Trait->setObjectName(QStringLiteral("bouton_Trait"));
        bouton_Trait->setGeometry(QRect(10, 510, 111, 31));
        bouton_Trait->setCursor(QCursor(Qt::PointingHandCursor));
        bouton_Trait->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
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
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"\n"
"	\n"
"	color: rgb(83, 83, 83);\n"
"	/*border-color: rgb(83, 83, 83);\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(83, 83, 83);\n"
"	border-radius: 10px;*/\n"
"	border-top: none;\n"
"	border-rigth: none;\n"
"	border-left: none;	\n"
"	border-bottom: none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	background-color: rgb(236, 236, 236);\n"
"	border-radiu"
                        "s: 10px;\n"
"}\n"
"	"));
        bouton_Pat = new QPushButton(centralWidget);
        bouton_Pat->setObjectName(QStringLiteral("bouton_Pat"));
        bouton_Pat->setGeometry(QRect(10, 470, 111, 31));
        bouton_Pat->setCursor(QCursor(Qt::PointingHandCursor));
        bouton_Pat->setStyleSheet(QLatin1String("/*QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
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
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 10pt \"Snap ITC\";\n"
"	color: rgb(83, 83, 83);\n"
"	/*background-color: rgb(255, 255, 255);\n"
"	\n"
"	border-color: rgb(83, 83, 83);\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(83, 83, 83);\n"
"	border-radius: 10px;*/\n"
"\n"
"	border-top: none;\n"
"	border-rigth: none;\n"
"	border-left: none;	\n"
"	border-bottom: none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border : 2px solid  rgb(31, 31, 31);\n"
"	color: rgb(31, 31, 31);\n"
"	border-radius: 10px;	\n"
"	background-color: rgb(236, 236, 2"
                        "36);\n"
"}\n"
"	"));
        GestionPrestation->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GestionPrestation);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1020, 23));
        GestionPrestation->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GestionPrestation);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GestionPrestation->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GestionPrestation);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GestionPrestation->setStatusBar(statusBar);

        retranslateUi(GestionPrestation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GestionPrestation);
    } // setupUi

    void retranslateUi(QMainWindow *GestionPrestation)
    {
        GestionPrestation->setWindowTitle(QApplication::translate("GestionPrestation", "GestionPrestation", Q_NULLPTR));
        actioncon->setText(QApplication::translate("GestionPrestation", "con", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actioncon->setShortcut(QApplication::translate("GestionPrestation", "E, O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton->setText(QApplication::translate("GestionPrestation", "Load", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GestionPrestation", "Add", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GestionPrestation", "Update", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GestionPrestation", "Delete", Q_NULLPTR));
        label_2->setText(QString());
        toolButton_3->setText(QString());
        label_7->setText(QApplication::translate("GestionPrestation", "Liste du Medecins", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GestionPrestation", "Medecins", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GestionPrestation", "Load", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("GestionPrestation", "Add", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("GestionPrestation", "Update", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("GestionPrestation", "Delete", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("GestionPrestation", "Liste  du Patients", Q_NULLPTR));
        toolButton_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GestionPrestation", "Patients", Q_NULLPTR));
        label_6->setText(QString());
        pushButton_9->setText(QApplication::translate("GestionPrestation", "Add", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("GestionPrestation", "Delete", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("GestionPrestation", "Load", Q_NULLPTR));
        label_9->setText(QApplication::translate("GestionPrestation", "Etat de la liste des Patient trait\303\251s par un Medecin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GestionPrestation", "Traitrement", Q_NULLPTR));
        label_8->setText(QString());
        pushButton_12->setText(QApplication::translate("GestionPrestation", "Load", Q_NULLPTR));
        toolButton->setText(QString());
        label_10->setText(QApplication::translate("GestionPrestation", "Liste des Medecins consut\303\251s par un Medecin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GestionPrestation", "Consultation", Q_NULLPTR));
        toolButton_4->setText(QString());
        toolButton_5->setText(QApplication::translate("GestionPrestation", "<---", Q_NULLPTR));
        bouton_H->setText(QApplication::translate("GestionPrestation", "Histogramm", Q_NULLPTR));
        bouton_Med->setText(QApplication::translate("GestionPrestation", "Medecin Sum", Q_NULLPTR));
        bouton_Trait->setText(QApplication::translate("GestionPrestation", "Sum and  Day", Q_NULLPTR));
        bouton_Pat->setText(QApplication::translate("GestionPrestation", "Patient Sum", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GestionPrestation: public Ui_GestionPrestation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONPRESTATION_H
