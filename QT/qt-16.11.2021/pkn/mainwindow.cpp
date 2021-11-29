#include <ctime>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    srand(time(NULL));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_u1_clicked(){
    uzytkownik = 0;
    komputer = rand() % 3;
    wybierz(komputer);
    wygrana(komputer, uzytkownik);
}

void MainWindow::on_u2_clicked(){
    uzytkownik = 1;
    komputer = rand() % 3;
    wybierz(komputer);
    wygrana(komputer, uzytkownik);
}

void MainWindow::on_u3_clicked(){
    uzytkownik = 2;
    komputer = rand() % 3;
    wybierz(komputer);
    wygrana(komputer, uzytkownik);
}

void MainWindow::wybierz(int przycisk){
    ui->k1->setDisabled(true);
    ui->k2->setDisabled(true);
    ui->k3->setDisabled(true);
    switch (przycisk) {
        case 0:
            ui->k1->setEnabled(true);
            break;
        case 1:
            ui->k2->setEnabled(true);
            break;
        case 2:
            ui->k3->setEnabled(true);
            break;
    }
}

void MainWindow::wygrana(int k, int u){
    int wynik = (k - u + 3) % 3;
    int wartosc = 0;
    ui->label->setNum(wynik);
    /*if(u == 0 && wynik == 1){
        wartosc = ui->label->text().toInt();
        ui->label->setNum(wartosc+1);
    }
    else if(u == 1 && wynik == 2){
        wartosc = ui->label->text().toInt();
        ui->label->setNum(wartosc+1);
    }
    else if(u == 2 && wynik == 0){
        wartosc = ui->label->text().toInt();
        ui->label->setNum(wartosc+1);
    }*/
}

void MainWindow::on_reset_clicked(){
    ui->label->setNum(0);
    ui->label_2->setNum(0);
}

