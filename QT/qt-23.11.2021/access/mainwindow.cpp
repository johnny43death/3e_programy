#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_dodajBtn_clicked()
{
    QString liczby_p = ui->lp->text();
    QString imiona = ui->imiona->text();
    QString nazwiska = ui->nazwiska->text();
    QString numery = ui->numery->text();

    lp++;
    QString liczba_p = QString::number(lp);
    QString imie = ui->wpiszImie->text();
    QString nazwisko = ui->wpiszNazwisko->text();
    QString numer = ui->wpiszNum->text();

    ui->lp->setText(liczby_p + "\n" + liczba_p);
    ui->imiona->setText(imiona + "\n" + imie);
    ui->nazwiska->setText(nazwiska + "\n" + nazwisko);
    ui->numery->setText(numery + "\n" + numer);

    ui->wpiszImie->setText("");
    ui->wpiszNazwisko->setText("");
    ui->wpiszNum->setText("");
}
