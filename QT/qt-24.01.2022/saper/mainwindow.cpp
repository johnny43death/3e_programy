#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <iostream>

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

void MainWindow::on_p11_clicked()
{
    xx = 1;
    yy = 1;
}
void MainWindow::on_p12_clicked()
{
    xx = 1;
    yy = 2;
}
void MainWindow::on_p13_clicked()
{
    xx = 1;
    yy = 3;
}
void MainWindow::on_p14_clicked()
{
    xx = 1;
    yy = 4;
}
void MainWindow::on_p15_clicked()
{
    xx = 1;
    yy = 5;
}
void MainWindow::on_p21_clicked()
{
    xx = 2;
    yy = 1;
}
void MainWindow::on_p22_clicked()
{
    xx = 2;
    yy = 2;
}
void MainWindow::on_p23_clicked()
{
    xx = 2;
    yy = 3;
}
void MainWindow::on_p24_clicked()
{
    xx = 2;
    yy = 4;
}
void MainWindow::on_p25_clicked()
{
    xx = 2;
    yy = 5;
}
void MainWindow::on_p31_clicked()
{
    xx = 3;
    yy = 1;
}
void MainWindow::on_p32_clicked()
{
    xx = 3;
    yy = 2;
}
void MainWindow::on_p33_clicked()
{
    xx = 3;
    yy = 3;
}
void MainWindow::on_p34_clicked()
{
    xx = 3;
    yy = 4;
}
void MainWindow::on_p35_clicked()
{
    xx = 3;
    yy = 5;
}
void MainWindow::on_p41_clicked()
{
    xx = 4;
    yy = 1;
}
void MainWindow::on_p42_clicked()
{
    xx = 4;
    yy = 2;
}
void MainWindow::on_p43_clicked()
{
    xx = 4;
    yy = 3;
}
void MainWindow::on_p44_clicked()
{
    xx = 4;
    yy = 4;
}
void MainWindow::on_p45_clicked()
{
    xx = 4;
    yy = 5;
}
void MainWindow::on_p51_clicked()
{
    xx = 5;
    yy = 1;
}
void MainWindow::on_p52_clicked()
{
    xx = 5;
    yy = 2;
}
void MainWindow::on_p53_clicked()
{
    xx = 5;
    yy = 3;
}
void MainWindow::on_p54_clicked()
{
    xx = 5;
    yy = 4;
}
void MainWindow::on_p55_clicked()
{
    xx = 5;
    yy = 5;
}

class Pole {
public:
    int wartosc;
    bool klik;
    bool czyBomba;

    Pole();
    bool wpiszBombe();
    void dodaj();
};

class Metody : public Pole {
public:
    bool czyTrafilBombe(int);
    void wyswietlBomby();
    void wyswietl();
};

const int n = 5;
const int m = 5; //ilosc bomb
Metody tab[n + 2][n + 2];

bool calaPlansza() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (tab[i][j].klik == false) return true;
    return false;
}

void zera(int x, int y) {
    for (int i = x - 1; i <= x + 1; i++)
        for (int j = y - 1; j <= y + 1; j++)
            if (tab[i][j].klik == false)
                if (tab[i][j].wartosc == 0) {
                    tab[i][j].klik = true;
                    zera(i, j);
                }
                else tab[i][j].klik = true;
}

void zablokuj(int x, int y) {
    for (int i = x - 1; i <= x + 1; i++)
        for (int j = y - 1; j <= y + 1; j++)
            tab[i][j].wartosc += 100;
    tab[x][y].klik = true;
}

void odblokuj(int x, int y) {
    for (int i = x - 1; i <= x + 1; i++)
        for (int j = y - 1; j <= y + 1; j++)
            tab[i][j].wartosc -= 100;
}

int main()
{
    srand(time(NULL));

    int x, y, z, licznik = 0, xx, yy;
    bool bomba, koniec = true;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            tab[i][j].wartosc = 0;

    std::cin >> yy >> xx;

    zablokuj(xx, yy);

    while (licznik < m) {
        x = rand() % n + 1;
        y = rand() % n + 1;
        bomba = tab[x][y].wpiszBombe();
        if (bomba) {
            licznik++;
            for (int i = x - 1; i <= x + 1; i++)
                for (int j = y - 1; j <= y + 1; j++)
                    tab[i][j].dodaj();
        }
    }

    odblokuj(xx, yy);
    zera(xx, yy);

    for (int i = 1; i <= n; i++, std::cout << std::endl)
        for (int j = 1; j <= n; j++)
            tab[i][j].wyswietl();

    while ((calaPlansza) && (koniec)) {
        std::cin >> y >> x >> z;
        bomba = tab[x][y].czyTrafilBombe(z);
        if (bomba) koniec = false;
        else {
            if (tab[x][y].wartosc == 0) zera(x, y);
            for (int i = 1; i <= n; i++, std::cout << std::endl)
                for (int j = 1; j <= n; j++)
                    tab[i][j].wyswietl();
        }
    }
    for (int i = 1; i <= n; i++, std::cout << std::endl)
        for (int j = 1; j <= n; j++)
            tab[i][j].wyswietlBomby();
}

Pole::Pole()
{
    wartosc = 100;
    klik = false;
    czyBomba = false;
}

bool Pole::wpiszBombe()
{
    if (wartosc >= 9) return false;
    else {
        wartosc = 9;
        return true;
    }
}

void Pole::dodaj()
{
    if (wartosc != 9) wartosc++;
}

bool Metody::czyTrafilBombe(int z)
{
    if (!klik) {
        if (z == 1)
            if (czyBomba) czyBomba = false;
            else czyBomba = true;
        else {
            klik = true;
            if (wartosc == 9) return true;
        }
        return false;
    }
    return false;
}

void Metody::wyswietlBomby()
{
    if (wartosc == 9)
        if (czyBomba) std::cout << "!";
        else std::cout << "X";
    else
        if (czyBomba) std::cout << "?";
        else std::cout << wartosc;
}

void Metody::wyswietl()
{
    if (!klik)
        if (czyBomba) std::cout << "P";
        else std::cout << "_";
    else
        std::cout << wartosc;
}
