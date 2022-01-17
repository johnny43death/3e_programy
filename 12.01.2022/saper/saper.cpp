#include <iostream>
#include <ctime>

using namespace std;

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

    cin >> yy >> xx;

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

    for (int i = 1; i <= n; i++, cout << endl)
        for (int j = 1; j <= n; j++)
            tab[i][j].wyswietl();

    while ((calaPlansza) && (koniec)) {
        cin >> y >> x >> z;
        bomba = tab[x][y].czyTrafilBombe(z);
        if (bomba) koniec = false;
        else {
            if (tab[x][y].wartosc == 0) zera(x, y);
            for (int i = 1; i <= n; i++, cout << endl)
                for (int j = 1; j <= n; j++)
                    tab[i][j].wyswietl();
        }
    }
    for (int i = 1; i <= n; i++, cout << endl)
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
        if (czyBomba) cout << "!";
        else cout << "X";
    else
        if (czyBomba) cout << "?";
        else cout << wartosc;
}

void Metody::wyswietl()
{
    if (!klik)
        if (czyBomba) cout << "P";
        else cout << "_";
    else
        cout << wartosc;
}
