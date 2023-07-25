/********************************************************************************
** Form generated from reading UI file 'patupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATUPDATE_H
#define UI_PATUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatUpdate
{
public:
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *yes;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *PatUpdate)
    {
        if (PatUpdate->objectName().isEmpty())
            PatUpdate->setObjectName(QStringLiteral("PatUpdate"));
        PatUpdate->resize(350, 550);
        PatUpdate->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        label_3 = new QLabel(PatUpdate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 301, 41));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));
        horizontalLayoutWidget = new QWidget(PatUpdate);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 470, 201, 41));
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

        yes = new QPushButton(horizontalLayoutWidget);
        yes->setObjectName(QStringLiteral("yes"));
        yes->setCursor(QCursor(Qt::PointingHandCursor));
        yes->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout->addWidget(yes);

        line = new QFrame(PatUpdate);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 381, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(PatUpdate);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 332, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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


        retranslateUi(PatUpdate);

        QMetaObject::connectSlotsByName(PatUpdate);
    } // setupUi

    void retranslateUi(QDialog *PatUpdate)
    {
        PatUpdate->setWindowTitle(QApplication::translate("PatUpdate", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("PatUpdate", "Edit list Patient", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PatUpdate", "No", Q_NULLPTR));
        yes->setText(QApplication::translate("PatUpdate", "Yes", Q_NULLPTR));
        label->setText(QApplication::translate("PatUpdate", "Number  (PAT) :", Q_NULLPTR));
        label_2->setText(QApplication::translate("PatUpdate", "Name :", Q_NULLPTR));
        label_4->setText(QApplication::translate("PatUpdate", "Address :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PatUpdate: public Ui_PatUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATUPDATE_H
