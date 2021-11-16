#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    komputer = rand()%ui->horizontalSlider_2->value();
    //ui->label->setText(QString::number(komputer));    //jak wypisywać
    ui->pushButton->setEnabled(1);
    ui->startButton->setDisabled(1);
    ui->label->setText("liczba wylosowana");
    start = ui->horizontalSlider->value();
    ileprob = 0;
    ui->progressBar->setMaximum(start);
    ui->spinBox->setMaximum(ui->horizontalSlider_2->value());
}

void MainWindow::on_pushButton_clicked()
{
    ileprob++;
    ui->progressBar->setValue(ileprob);
    int uzytkownik = ui->spinBox->value();
    if(uzytkownik < komputer)
        ui->label->setText("za mala liczba");
    else if(uzytkownik > komputer)
        ui->label->setText("za duza liczba");
    else{
        ui->label->setText("WYGRANA!!!");
        ui->pushButton->setDisabled(1);
        ui->startButton->setEnabled(1);
        ileprob = 0;
    }

    if(ileprob==start){
        ui->label->setText("PRZEGRANA!!!");
        ui->pushButton->setDisabled(1);
        ui->startButton->setEnabled(1);
    }
}

