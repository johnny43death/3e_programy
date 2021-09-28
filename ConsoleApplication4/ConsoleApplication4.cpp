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
    int num, max = 0, lider = 0, tab[101];
    fstream plik;
    for (int i = 0; i < 101; i++) {
        tab[i] = 0;
    }

    plik.open("plik.txt", ios::out | ios::trunc);
    if (plik.good() == true) {

        for (int i = 0; i <= 100; i++) {
            plik << rand() % 100 + 1 << endl;
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
    cout << "   " << max;
    max = 0;
    for (int i = 0; i < 101; i++) {
        if (tab[i] > max) {
            max = tab[i];
            lider = i;
        }
    }
    cout << ":" << lider << ":" << max;
}