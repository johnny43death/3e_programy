#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    ui->u1->setDisabled(1);
    ui->u2->setDisabled(1);
    ui->u3->setDisabled(1);
    ui->k1->setDisabled(1);
    ui->k2->setDisabled(1);
    ui->k3->setDisabled(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wybierz(int przycisk){
    ui->k1->setDisabled(1);
    ui->k2->setDisabled(1);
    ui->k3->setDisabled(1);
    if(przycisk == 0) ui->k1->setEnabled(1);
    if(przycisk == 1) ui->k2->setEnabled(1);
    if(przycisk == 2) ui->k3->setEnabled(1);
}

void MainWindow::wygrana(int cpu, int usr){
    wynik = (cpu-usr+3)%3;
    int k,u;
    if(wynik==1){
        wynik = ui->label->text().toInt();
        wynik++;
        ui->label->setNum(wynik);
        u = wynik;
        if(start!=ilegier){
            ui->progressBar->setMaximum(ilegier);
            start++;
            ui->progressBar->setValue(start);
        }
    }else if(wynik==2){
        wynik = ui->label_2->text().toInt();
        wynik++;
        ui->label_2->setNum(wynik);
        k = wynik;
        if(start!=ilegier){
            ui->progressBar->setMaximum(ilegier);
            start++;
            ui->progressBar->setValue(start);
        }
    }
    if(start==ilegier && ){

    }
}

void MainWindow::on_u1_clicked()
{
    uzyt = 0;
    komp = rand()%3;
    wybierz(komp);
    wygrana(komp, uzyt);
}

void MainWindow::on_u2_clicked()
{
    uzyt = 1;
    komp = rand()%3;
    wybierz(komp);
    wygrana(komp, uzyt);
}

void MainWindow::on_u3_clicked()
{
    uzyt = 2;
    komp = rand()%3;
    wybierz(komp);
    wygrana(komp, uzyt);
}

void MainWindow::on_reset_clicked()
{
    ui->label->setNum(0);
    ui->label_2->setNum(0);
    ui->u1->setDisabled(1);
    ui->u2->setDisabled(1);
    ui->u3->setDisabled(1);
    ui->k1->setDisabled(1);
    ui->k2->setDisabled(1);
    ui->k3->setDisabled(1);
    ui->horizontalSlider->setEnabled(1);
}

void MainWindow::on_startButton_clicked()
{
    wynik = 0;
    start = 0;
    ilegier = ui->horizontalSlider->value();
    ui->horizontalSlider->setDisabled(1);
    ui->u1->setEnabled(1);
    ui->u2->setEnabled(1);
    ui->u3->setEnabled(1);
    ui->k1->setEnabled(1);
    ui->k2->setEnabled(1);
    ui->k3->setEnabled(1);
}
