#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
// ( ͡° ͜ʖ ͡°)

using namespace std;

int main()
{
    srand(time(NULL));

    string linia;
    fstream plik;
    int num, max = 0, lider = 0, tab[101], a, b, c, d, tab_pom[101][2];

    cout << "Podaj ilosc liczb: ";
    cin >> a;
    cout << "Podaj zakres: " << endl;
    cout << ">   Od: ";
    cin >> c;
    cout << ">   Do: ";
    cin >> b;
    cout << "Ktory lider z kolei: ";
    cin >> d;

    for (int i = 0; i < a + 1; i++) {
        tab[i] = 0;
    }

    plik.open("plik.txt", ios::out | ios::trunc);
    if (plik.good() == true) {

        for (int i = 1; i <= a; i++) {
            plik << rand() % b + c << endl;
        }
        plik.close();

    }
    plik.open("plik.txt", ios::in);
    if (plik.good() == true) {

        while (!plik.eof()) {
            getline(plik, linia);
            if (linia.size() > 0) istringstream(linia) >> num;
            else break;
            if (num > max) max = num;
            tab[num]++;
            cout << linia << endl;
        }
        plik.close();
    }
    cout << endl;
    max = 0;
    for (int i = 1; i < a; i++) {
        if (tab[i] > max) {
            max = tab[i];
            lider = i;
        }
        cout << tab[i] << " ";
    }
    cout << lider << ":" << max;
}