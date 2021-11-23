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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *u3;
    QPushButton *u2;
    QPushButton *u1;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *k3;
    QPushButton *k2;
    QPushButton *k1;
    QLabel *label;
    QLabel *label_2;
    QPushButton *reset;
    QSlider *horizontalSlider;
    QPushButton *startButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(172, 255, 249, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 230, 211, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        u3 = new QPushButton(gridLayoutWidget);
        u3->setObjectName(QString::fromUtf8("u3"));
        QFont font;
        font.setPointSize(20);
        u3->setFont(font);

        gridLayout->addWidget(u3, 3, 0, 1, 1);

        u2 = new QPushButton(gridLayoutWidget);
        u2->setObjectName(QString::fromUtf8("u2"));
        u2->setFont(font);

        gridLayout->addWidget(u2, 1, 0, 1, 1);

        u1 = new QPushButton(gridLayoutWidget);
        u1->setObjectName(QString::fromUtf8("u1"));
        u1->setFont(font);

        gridLayout->addWidget(u1, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(490, 230, 211, 271));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        k3 = new QPushButton(gridLayoutWidget_2);
        k3->setObjectName(QString::fromUtf8("k3"));
        k3->setFont(font);

        gridLayout_2->addWidget(k3, 4, 0, 1, 1);

        k2 = new QPushButton(gridLayoutWidget_2);
        k2->setObjectName(QString::fromUtf8("k2"));
        k2->setFont(font);

        gridLayout_2->addWidget(k2, 1, 0, 1, 1);

        k1 = new QPushButton(gridLayoutWidget_2);
        k1->setObjectName(QString::fromUtf8("k1"));
        k1->setFont(font);

        gridLayout_2->addWidget(k1, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 159, 211, 71));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        label->setPalette(palette1);
        QFont font1;
        font1.setPointSize(40);
        label->setFont(font1);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 160, 211, 71));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(370, 180, 80, 21));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(270, 100, 271, 20));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(370, 140, 81, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 80, 81, 20));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 70, 191, 31));
        QFont font3;
        font3.setPointSize(12);
        label_4->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 530, 161, 21));
        label_5->setFont(font3);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(110, 560, 591, 23));
        progressBar->setValue(0);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        u3->setText(QCoreApplication::translate("MainWindow", "nozyce", nullptr));
        u2->setText(QCoreApplication::translate("MainWindow", "kamien", nullptr));
        u1->setText(QCoreApplication::translate("MainWindow", "papier", nullptr));
        k3->setText(QCoreApplication::translate("MainWindow", "nozyce", nullptr));
        k2->setText(QCoreApplication::translate("MainWindow", "kamien", nullptr));
        k1->setText(QCoreApplication::translate("MainWindow", "papier", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Do ilu zwyci\304\231stw grasz? ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Zwyci\304\231stwa: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
