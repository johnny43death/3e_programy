/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *wpiszImie;
    QLineEdit *wpiszNazwisko;
    QLineEdit *wpiszNum;
    QPushButton *dodajBtn;
    QLabel *lp;
    QLabel *imiona;
    QLabel *nazwiska;
    QLabel *numery;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        wpiszImie = new QLineEdit(centralwidget);
        wpiszImie->setObjectName(QString::fromUtf8("wpiszImie"));
        wpiszImie->setGeometry(QRect(60, 130, 113, 20));
        wpiszNazwisko = new QLineEdit(centralwidget);
        wpiszNazwisko->setObjectName(QString::fromUtf8("wpiszNazwisko"));
        wpiszNazwisko->setGeometry(QRect(60, 180, 113, 20));
        wpiszNum = new QLineEdit(centralwidget);
        wpiszNum->setObjectName(QString::fromUtf8("wpiszNum"));
        wpiszNum->setGeometry(QRect(60, 230, 113, 20));
        dodajBtn = new QPushButton(centralwidget);
        dodajBtn->setObjectName(QString::fromUtf8("dodajBtn"));
        dodajBtn->setGeometry(QRect(60, 270, 111, 31));
        lp = new QLabel(centralwidget);
        lp->setObjectName(QString::fromUtf8("lp"));
        lp->setGeometry(QRect(190, 40, 61, 451));
        lp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        imiona = new QLabel(centralwidget);
        imiona->setObjectName(QString::fromUtf8("imiona"));
        imiona->setGeometry(QRect(280, 40, 91, 451));
        imiona->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        nazwiska = new QLabel(centralwidget);
        nazwiska->setObjectName(QString::fromUtf8("nazwiska"));
        nazwiska->setGeometry(QRect(390, 40, 181, 451));
        nazwiska->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        numery = new QLabel(centralwidget);
        numery->setObjectName(QString::fromUtf8("numery"));
        numery->setGeometry(QRect(590, 40, 181, 451));
        numery->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        wpiszImie->setText(QCoreApplication::translate("MainWindow", "Imie", nullptr));
        wpiszNazwisko->setText(QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        wpiszNum->setText(QCoreApplication::translate("MainWindow", "Numer telefonu", nullptr));
        dodajBtn->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        lp->setText(QCoreApplication::translate("MainWindow", "Lp.", nullptr));
        imiona->setText(QCoreApplication::translate("MainWindow", "Imiona", nullptr));
        nazwiska->setText(QCoreApplication::translate("MainWindow", "Nazwiska", nullptr));
        numery->setText(QCoreApplication::translate("MainWindow", "Numery telefonu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
