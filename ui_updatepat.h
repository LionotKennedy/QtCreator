/********************************************************************************
** Form generated from reading UI file 'updatepat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPAT_H
#define UI_UPDATEPAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_UpdatePat
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdatePat)
    {
        if (UpdatePat->objectName().isEmpty())
            UpdatePat->setObjectName(QStringLiteral("UpdatePat"));
        UpdatePat->resize(413, 550);
        UpdatePat->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(UpdatePat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 0, 301, 41));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 30, 381, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 460, 201, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"font: 16pt \"Snap ITC\";\n"
"}\n"
"PushButton\n"
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

        horizontalLayout->addWidget(pushButton_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 60, 332, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"font: 16pt \"Snap ITC\";\n"
"}"));

        horizontalLayout_2->addWidget(label_5);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"	border-top:none;\n"
"	border-rigth:none;\n"
"	border-left:none;	\n"
"	border-bottom:1px solid skyblue;\n"
"	font: 11pt \"Segoe Script\";\n"
"}"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

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

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label_4);

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

        UpdatePat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdatePat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 413, 21));
        UpdatePat->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdatePat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UpdatePat->setStatusBar(statusbar);

        retranslateUi(UpdatePat);

        QMetaObject::connectSlotsByName(UpdatePat);
    } // setupUi

    void retranslateUi(QMainWindow *UpdatePat)
    {
        UpdatePat->setWindowTitle(QApplication::translate("UpdatePat", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("UpdatePat", "Edit list Patient", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UpdatePat", "No", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UpdatePat", "Yes", Q_NULLPTR));
        label_5->setText(QApplication::translate("UpdatePat", "Identity of number:", Q_NULLPTR));
        label->setText(QApplication::translate("UpdatePat", "Number  (PAT) :", Q_NULLPTR));
        label_2->setText(QApplication::translate("UpdatePat", "Name :", Q_NULLPTR));
        label_4->setText(QApplication::translate("UpdatePat", "Address :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdatePat: public Ui_UpdatePat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPAT_H
