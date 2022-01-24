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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *u1;
    QPushButton *u2;
    QPushButton *u3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *k2;
    QPushButton *k3;
    QPushButton *k1;
    QPushButton *reset;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 160, 101, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 160, 111, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 200, 160, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        u1 = new QPushButton(gridLayoutWidget);
        u1->setObjectName(QString::fromUtf8("u1"));

        gridLayout->addWidget(u1, 0, 0, 1, 1);

        u2 = new QPushButton(gridLayoutWidget);
        u2->setObjectName(QString::fromUtf8("u2"));

        gridLayout->addWidget(u2, 1, 0, 1, 1);

        u3 = new QPushButton(gridLayoutWidget);
        u3->setObjectName(QString::fromUtf8("u3"));

        gridLayout->addWidget(u3, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(480, 200, 160, 191));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        k2 = new QPushButton(gridLayoutWidget_2);
        k2->setObjectName(QString::fromUtf8("k2"));

        gridLayout_2->addWidget(k2, 1, 0, 1, 1);

        k3 = new QPushButton(gridLayoutWidget_2);
        k3->setObjectName(QString::fromUtf8("k3"));

        gridLayout_2->addWidget(k3, 5, 0, 1, 1);

        k1 = new QPushButton(gridLayoutWidget_2);
        k1->setObjectName(QString::fromUtf8("k1"));

        gridLayout_2->addWidget(k1, 0, 0, 1, 1);

        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(360, 180, 80, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        u1->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        u2->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        u3->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        k2->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        k3->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        k1->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
