#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setDisabled(1);
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sliderTop_valueChanged()
{
    min = ui->sliderTop->value();
    ui->spinBox->setMinimum(min);
    ui->spinBox_2->setMinimum(min);
    ui->sliderBottom->setMaximum(min);
}

void MainWindow::on_sliderBottom_valueChanged()
{
    max = ui->sliderBottom->value();
    ui->spinBox->setMaximum(max);
    ui->spinBox_2->setMaximum(max);
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setDisabled(1);
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
    a = ui->spinBox->value();
    b = ui->spinBox_2->value();
    wynik = a + b;
    ui->wynik->setNum(wynik);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton->setDisabled(1);
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
    a = ui->spinBox->value();
    b = ui->spinBox_2->value();
    wynik = a - b;
    ui->wynik->setNum(wynik);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton->setDisabled(1);
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
    a = ui->spinBox->value();
    b = ui->spinBox_2->value();
    wynik = a * b;
    ui->wynik->setNum(wynik);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->pushButton->setDisabled(1);
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
    a = ui->spinBox->value();
    b = ui->spinBox_2->value();
    if(b!=0){
        wynik = a / b;
        ui->wynik->setNum(wynik);
    } else {
        //QMessageBox::information(this, "NIE DZIEL PRZEZ ZERO"); coś nie działa
        ui->wynik->setText("NIE DZIEL PRZEZ ZERO");
    }
}

void MainWindow::on_startButton_clicked()
{
    ui->pushButton->setEnabled(1);
    ui->pushButton_2->setEnabled(1);
    ui->pushButton_3->setEnabled(1);
    ui->pushButton_4->setEnabled(1);
    ui->wynik->clear();
    ui->spinBox->clear();
    ui->spinBox_2->clear();
}
