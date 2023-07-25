/********************************************************************************
** Form generated from reading UI file 'updatemed.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMED_H
#define UI_UPDATEMED_H

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

class Ui_UpdateMed
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateMed)
    {
        if (UpdateMed->objectName().isEmpty())
            UpdateMed->setObjectName(QStringLiteral("UpdateMed"));
        UpdateMed->resize(426, 550);
        UpdateMed->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(UpdateMed);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 0, 361, 31));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 30, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 460, 221, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"font: 16pt \"Snap ITC\";\n"
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

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"font: 16pt \"Snap ITC\";\n"
"}\n"
"QPushButton\n"
"{\n"
"	/*font: 16pt \"Snap ITC\";*/\n"
"}\n"
"QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 85, 255) ;\n"
"	border-radius: 10px;\n"
"	font: 14pt \"Snap ITC\";\n"
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

        horizontalLayout->addWidget(pushButton_3);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 60, 332, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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
"	border-bottom:1px solid skyblue;	\n"
"	font: 11pt \"Segoe Script\";\n"
"}"));

        verticalLayout->addWidget(lineEdit_2);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label_2);

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

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label);

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

        UpdateMed->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateMed);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 21));
        UpdateMed->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateMed);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UpdateMed->setStatusBar(statusbar);

        retranslateUi(UpdateMed);

        QMetaObject::connectSlotsByName(UpdateMed);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateMed)
    {
        UpdateMed->setWindowTitle(QApplication::translate("UpdateMed", "MainWindow", Q_NULLPTR));
        label_4->setText(QApplication::translate("UpdateMed", "Edit List someone", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UpdateMed", "No", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("UpdateMed", "Yes", Q_NULLPTR));
        label_3->setText(QApplication::translate("UpdateMed", "Number(MED):", Q_NULLPTR));
        label_2->setText(QApplication::translate("UpdateMed", "Name :", Q_NULLPTR));
        label->setText(QApplication::translate("UpdateMed", "Benefit :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdateMed: public Ui_UpdateMed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMED_H
