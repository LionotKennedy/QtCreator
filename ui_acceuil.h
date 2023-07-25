/********************************************************************************
** Form generated from reading UI file 'acceuil.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEUIL_H
#define UI_ACCEUIL_H

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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acceuil
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_pic;
    QToolButton *toolButton;
    QToolButton *toolButton_5;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Acceuil)
    {
        if (Acceuil->objectName().isEmpty())
            Acceuil->setObjectName(QStringLiteral("Acceuil"));
        Acceuil->resize(800, 500);
        Acceuil->setCursor(QCursor(Qt::ArrowCursor));
        Acceuil->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Segoe Script\";\n"
"background-color: rgb(255, 255, 255);\n"
"/*background-color: rgb(66, 66, 66);*/\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(Acceuil);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 370, 241, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 14pt \"Snap ITC\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	/*background-color: rgb(255, 0, 127);*/\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-style: solid 5px;\n"
"	border : 2px solid rgb(255, 0, 0);\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 280, 421, 61));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Snap ITC\";"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(270, 20, 271, 261));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(750, 370, 41, 51));
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"/*background-color: rgb(255, 0, 0);*/\n"
"border-radius : 25px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("icon/power_shut_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(35, 35));
        toolButton_5 = new QToolButton(centralwidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(10, 0, 41, 51));
        toolButton_5->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	/*background-color: rgb(255, 0, 0);*/\n"
"	/*background-color: rgb(61, 61, 61);*/\n"
"	/*background-color: rgb(255,255, 255);*/\n"
"	border-radius : 25px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("icon/heart.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon1);
        toolButton_5->setIconSize(QSize(100, 100));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 5, 71, 31));
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	\n"
"	font: 75 14pt \"Segoe Script\";\n"
"}"));
        Acceuil->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Acceuil);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 31));
        Acceuil->setMenuBar(menubar);
        statusbar = new QStatusBar(Acceuil);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Acceuil->setStatusBar(statusbar);

        retranslateUi(Acceuil);

        QMetaObject::connectSlotsByName(Acceuil);
    } // setupUi

    void retranslateUi(QMainWindow *Acceuil)
    {
        Acceuil->setWindowTitle(QApplication::translate("Acceuil", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Acceuil", "Open", Q_NULLPTR));
        label->setText(QApplication::translate("Acceuil", "Gestion des prestations des Medecins", Q_NULLPTR));
        label_pic->setText(QString());
        toolButton->setText(QString());
        toolButton_5->setText(QString());
        label_2->setText(QApplication::translate("Acceuil", "Health", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Acceuil: public Ui_Acceuil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEUIL_H
