/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatorform
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculatorform)
    {
        if (calculatorform->objectName().isEmpty())
            calculatorform->setObjectName("calculatorform");
        calculatorform->resize(800, 600);
        centralwidget = new QWidget(calculatorform);
        centralwidget->setObjectName("centralwidget");
        calculatorform->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculatorform);
        menubar->setObjectName("menubar");
        calculatorform->setMenuBar(menubar);
        statusbar = new QStatusBar(calculatorform);
        statusbar->setObjectName("statusbar");
        calculatorform->setStatusBar(statusbar);

        retranslateUi(calculatorform);

        QMetaObject::connectSlotsByName(calculatorform);
    } // setupUi

    void retranslateUi(QMainWindow *calculatorform)
    {
        calculatorform->setWindowTitle(QCoreApplication::translate("Calculatorform", "calculatorform", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatorform: public Ui_Calculatorform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
