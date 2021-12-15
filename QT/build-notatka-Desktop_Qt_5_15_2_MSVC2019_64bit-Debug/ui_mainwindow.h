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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSlider *pierwszySlider;
    QLabel *wynikLabel;
    QLineEdit *poleLineEdit;
    QProgressBar *pierwszyProgressBar;
    QPushButton *zatwierdzButton;
    QLabel *label;
    QLabel *label2;
    QLabel *label3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(242, 157);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pierwszySlider = new QSlider(centralwidget);
        pierwszySlider->setObjectName(QString::fromUtf8("pierwszySlider"));
        pierwszySlider->setGeometry(QRect(10, 10, 160, 22));
        pierwszySlider->setMinimum(1);
        pierwszySlider->setMaximum(50);
        pierwszySlider->setOrientation(Qt::Horizontal);
        wynikLabel = new QLabel(centralwidget);
        wynikLabel->setObjectName(QString::fromUtf8("wynikLabel"));
        wynikLabel->setGeometry(QRect(186, 10, 51, 20));
        QFont font;
        font.setPointSize(14);
        wynikLabel->setFont(font);
        poleLineEdit = new QLineEdit(centralwidget);
        poleLineEdit->setObjectName(QString::fromUtf8("poleLineEdit"));
        poleLineEdit->setGeometry(QRect(10, 60, 113, 21));
        pierwszyProgressBar = new QProgressBar(centralwidget);
        pierwszyProgressBar->setObjectName(QString::fromUtf8("pierwszyProgressBar"));
        pierwszyProgressBar->setGeometry(QRect(10, 120, 211, 23));
        pierwszyProgressBar->setMaximum(2);
        pierwszyProgressBar->setValue(0);
        zatwierdzButton = new QPushButton(centralwidget);
        zatwierdzButton->setObjectName(QString::fromUtf8("zatwierdzButton"));
        zatwierdzButton->setGeometry(QRect(10, 90, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 111, 16));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(140, 40, 71, 21));
        QFont font2;
        font2.setPointSize(10);
        label2->setFont(font2);
        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(140, 60, 71, 21));
        label3->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pierwszySlider, SIGNAL(valueChanged(int)), wynikLabel, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        wynikLabel->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        zatwierdzButton->setText(QCoreApplication::translate("MainWindow", "ZATWIERDZ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Podaj tekst", nullptr));
        label2->setText(QString());
        label3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
