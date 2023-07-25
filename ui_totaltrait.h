/********************************************************************************
** Form generated from reading UI file 'totaltrait.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALTRAIT_H
#define UI_TOTALTRAIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteTrait
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteTrait)
    {
        if (DeleteTrait->objectName().isEmpty())
            DeleteTrait->setObjectName(QStringLiteral("DeleteTrait"));
        DeleteTrait->resize(454, 553);
        DeleteTrait->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(DeleteTrait);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(180, 250, 151, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
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
"}"));

        horizontalLayout->addWidget(pushButton);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 441, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:1px solid skyblue;\n"
"	font: 16pt \"Segoe Script\";\n"
"}"));

        horizontalLayout_2->addWidget(comboBox);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:1px solid skyblue;\n"
"	font: 16pt \"Segoe Script\";\n"
"}"));

        horizontalLayout_3->addWidget(comboBox_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        DeleteTrait->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteTrait);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 454, 21));
        DeleteTrait->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteTrait);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DeleteTrait->setStatusBar(statusbar);

        retranslateUi(DeleteTrait);

        QMetaObject::connectSlotsByName(DeleteTrait);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteTrait)
    {
        DeleteTrait->setWindowTitle(QApplication::translate("DeleteTrait", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DeleteTrait", "Closed", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteTrait", "Sum (TRAIT):", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeleteTrait", "Ar", Q_NULLPTR));
        label_4->setText(QApplication::translate("DeleteTrait", "Day(s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteTrait: public Ui_DeleteTrait {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALTRAIT_H
