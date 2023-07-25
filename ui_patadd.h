/********************************************************************************
** Form generated from reading UI file 'patadd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATADD_H
#define UI_PATADD_H

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

class Ui_PatAdd
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *refuse;
    QPushButton *accepeted;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QFrame *line;

    void setupUi(QDialog *PatAdd)
    {
        if (PatAdd->objectName().isEmpty())
            PatAdd->setObjectName(QStringLiteral("PatAdd"));
        PatAdd->resize(350, 550);
        PatAdd->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        horizontalLayoutWidget = new QWidget(PatAdd);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 460, 231, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        refuse = new QPushButton(horizontalLayoutWidget);
        refuse->setObjectName(QStringLiteral("refuse"));
        QFont font;
        font.setFamily(QStringLiteral("Snap ITC"));
        font.setPointSize(16);
        refuse->setFont(font);
        refuse->setCursor(QCursor(Qt::PointingHandCursor));
        refuse->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout->addWidget(refuse);

        accepeted = new QPushButton(horizontalLayoutWidget);
        accepeted->setObjectName(QStringLiteral("accepeted"));
        accepeted->setFont(font);
        accepeted->setCursor(QCursor(Qt::PointingHandCursor));
        accepeted->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout->addWidget(accepeted);

        label_3 = new QLabel(PatAdd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 20, 261, 31));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));
        verticalLayoutWidget = new QWidget(PatAdd);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 80, 311, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font: 16pt \"Snap ITC\";"));

        verticalLayout->addWidget(label);

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

        line = new QFrame(PatAdd);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 361, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(PatAdd);

        QMetaObject::connectSlotsByName(PatAdd);
    } // setupUi

    void retranslateUi(QDialog *PatAdd)
    {
        PatAdd->setWindowTitle(QApplication::translate("PatAdd", "Dialog", Q_NULLPTR));
        refuse->setText(QApplication::translate("PatAdd", "Refuse", Q_NULLPTR));
        accepeted->setText(QApplication::translate("PatAdd", "Accepted", Q_NULLPTR));
        label_3->setText(QApplication::translate("PatAdd", "Insert a new Patient", Q_NULLPTR));
        label_2->setText(QApplication::translate("PatAdd", "Number (PAT) :", Q_NULLPTR));
        label_4->setText(QApplication::translate("PatAdd", "Name :", Q_NULLPTR));
        label->setText(QApplication::translate("PatAdd", "Address :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PatAdd: public Ui_PatAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATADD_H
