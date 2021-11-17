#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    xo = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wcisnij(QPointer<QPushButton> p, int tab[3][3], int x, int y){
    if(xo){
        p->setText("X");
        xo = false;
        tab[x][y] = 2;
    }else{
        p->setText("0");
        xo = true;
        tab[x][y] = 5;
    }
    p->setDisabled(1);
}

int MainWindow::sprawdz(int tab[3][3]){
    int wynik = 0;
    int suma;
    for(int x=0; x<3; x++){
        suma = 0;
        for(int y=0; y<3; y++){
            suma+=tab[x][y];
            if(suma==6) return wynik=2;
            if(suma==15) return wynik=1;
        }
    }
    for(int x=0; x<3; x++){
        suma=0;
        for(int y=0; y<3; y++){
            suma+=tab[y][x];
            if(suma==6) return wynik=2;
            if(suma==15) return wynik=1;
        }
    }
    suma = tab[0][0] + tab[1][1] + tab[2][2];
    if(suma==6) return wynik=2;
    if(suma==15) return wynik=1;

    suma = tab[0][2] + tab[1][1] + tab[2][0];
    if(suma==6) return wynik=2;
    if(suma==15) return wynik=1;
    return wynik;
}

void MainWindow::zwyciezca(int w){
    if(w!=0) blokuj();
    if(w==2) QMessageBox::information(this, "WYGRANA", "wygral X", QMessageBox::Ok);
    if(w==1) QMessageBox::information(this, "WYGRANA", "wygral O", QMessageBox::Ok);
}

void MainWindow::blokuj(){
    ui->pushButton->setDisabled(1);
    ui->pushButton_2->setDisabled(1);
    ui->pushButton_3->setDisabled(1);
    ui->pushButton_4->setDisabled(1);
    ui->pushButton_5->setDisabled(1);
    ui->pushButton_6->setDisabled(1);
    ui->pushButton_7->setDisabled(1);
    ui->pushButton_8->setDisabled(1);
    ui->pushButton_9->setDisabled(1);
}

void MainWindow::on_pushButton_clicked()
{
    wcisnij(ui->pushButton,tab,0,0);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_2_clicked()
{
    wcisnij(ui->pushButton_2,tab,0,1);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_3_clicked()
{
    wcisnij(ui->pushButton_3,tab,0,2);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_4_clicked()
{
    wcisnij(ui->pushButton_4,tab,1,0);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_5_clicked()
{
    wcisnij(ui->pushButton_5,tab,1,1);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_6_clicked()
{
    wcisnij(ui->pushButton_6,tab,1,2);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_7_clicked()
{
    wcisnij(ui->pushButton_7,tab,2,0);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_8_clicked()
{
    wcisnij(ui->pushButton_8,tab,2,1);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_pushButton_9_clicked()
{
    wcisnij(ui->pushButton_9,tab,2,2);
    zwyciezca(sprawdz(tab));
}

void MainWindow::on_ngButton_clicked()
{
    ui->pushButton->setText("");
    ui->pushButton->setEnabled(1);
    ui->pushButton_2->setText("");
    ui->pushButton_2->setEnabled(1);
    ui->pushButton_3->setText("");
    ui->pushButton_3->setEnabled(1);
    ui->pushButton_4->setText("");
    ui->pushButton_4->setEnabled(1);
    ui->pushButton_5->setText("");
    ui->pushButton_5->setEnabled(1);
    ui->pushButton_6->setText("");
    ui->pushButton_6->setEnabled(1);
    ui->pushButton_7->setText("");
    ui->pushButton_7->setEnabled(1);
    ui->pushButton_8->setText("");
    ui->pushButton_8->setEnabled(1);
    ui->pushButton_9->setText("");
    ui->pushButton_9->setEnabled(1);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            tab[i][j] = 0;
        }
    }
}
