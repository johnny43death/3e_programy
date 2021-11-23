#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    s_1 = 1;
    s_2 = 1;
    wylosuj(tab1,s_1);
    wylosuj(tab2,s_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wylosuj(int tab[50], int ile){
    int liczba, licznik=0;
    bool ok;

    for(int i=0;i<50;i++) tab[i]=0;

    while(licznik<ile){
        liczba = rand()%50+1;
        ok = true;
        for(int i=0;i<licznik;i++)
            if(liczba == tab[i]) ok = false;
        if(ok){
            tab[licznik] = liczba;
            licznik++;
        }
    }
}

int MainWindow::powtorzenia(int t1[50], int s1, int t2[50], int s2){
    int suma = 0;
    for(int i=0;i<s1;i++)
        for(int j=0;j<s2;j++)
            if(t1[i]==t2[j]) suma++;
    return suma;
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    s_1 = value;
    wylosuj(tab1,value);
    ui->label->setNum(powtorzenia(tab1,s_1,tab2,s_2));
}

void MainWindow::on_verticalSlider_2_valueChanged(int value)
{
    s_2 = value;
    wylosuj(tab2,value);
    ui->label->setNum(powtorzenia(tab1,s_1,tab2,s_2));
}
