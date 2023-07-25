/********************************************************************************
** Form generated from reading UI file 'addmed.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMED_H
#define UI_ADDMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMed
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddMed)
    {
        if (AddMed->objectName().isEmpty())
            AddMed->setObjectName(QStringLiteral("AddMed"));
        AddMed->resize(350, 550);
        AddMed->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(AddMed);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 299, 27));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 40, 416, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(80, 440, 251, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
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
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	/*font: 16pt \"Snap ITC\";*/\n"
"}\n"
"QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 85, 255) ;\n"
"	border-radius: 10px;\n"
"	font: 16pt \"Snap ITC\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	/*background-color: rgb(255, 0, 127);*/\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(0, 85, 255) ;\n"
"	border-color:rgb(0, 85, 255) ;\n"
"	border-style: solid 5px;\n"
"	border : 1px solid rgb(0, 85, 255) ;\n"
"	border-radius: 10px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 100, 321, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:1px solid skyblue;\n"
"	font: 11pt \"Segoe Script\";\n"
"}"));

        verticalLayout->addWidget(lineEdit_3);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:1px solid skyblue;\n"
"	font: 11pt \"Segoe Script\";\n"
"}"));

        verticalLayout->addWidget(lineEdit_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:1px solid skyblue;\n"
"	font: 11pt \"Segoe Script\";\n"
"}"));

        verticalLayout->addWidget(lineEdit);

        AddMed->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddMed);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        AddMed->setMenuBar(menubar);
        statusbar = new QStatusBar(AddMed);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddMed->setStatusBar(statusbar);

        retranslateUi(AddMed);

        QMetaObject::connectSlotsByName(AddMed);
    } // setupUi

    void retranslateUi(QMainWindow *AddMed)
    {
        AddMed->setWindowTitle(QApplication::translate("AddMed", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("AddMed", "Receiving a new Medecin", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddMed", "Refuse", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddMed", "Accepted", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddMed", "Number (MED):", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddMed", "Name :", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddMed", "Benefit :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddMed: public Ui_AddMed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMED_H
