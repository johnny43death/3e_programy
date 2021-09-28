#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string linia;
    fstream plik;
    plik.open("plik.txt", ios::out | ios::trunc);
//  app przenosi kursor na koniec pliku
//  ate przenosi na koniec pliku bez możliwości wpisu
//  out zezwala na zapis
//  in zezwala na odczyt
//  trunc sprawia że w chwili otwarcia (jeśli plik istnieje) zawartość pliku jest kasowana
//  w każdym otwieranym pliku kursor domyślnie jest na początku
    if (plik.good() == true) {
//  sprawdzanie czy plik jest poprawny (czy mamy prawa do zapisu, itp itd)

        plik << "sample text";
        plik.close();

//  zamknięcie pliku
    }
    plik.open("plik.txt", ios::in);
//  gdyby tutaj był ate, pętla while odczytu nie wykonałaby się ani razu, ponieważ kursor byłby już na końcu
    if (plik.good() == true) {
        while (!plik.eof()) {
            getline(plik, linia);
            cout << linia << endl;
        }
        plik.close();
    }
}