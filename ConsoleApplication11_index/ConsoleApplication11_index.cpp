#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    /*
    int bok1 = 10;
    int* w_bok1;
    w_bok1 = &bok1;                             // "&" to odwołanie
    
    int bok2 = 10;
    int* w_bok2;
    w_bok2 = &bok2;
    
    int pole;
    int* w_pole;
    w_pole = &pole;
    
    *w_pole = *w_bok1 * *w_bok2;

    cout << *w_pole << " " << w_pole << endl;   // pole obliczone jest ze wskaźników, a nie zmiennych
    cout << pole << " " << &pole;
    */

    /*
    int* ocena = new int(4);                    //wskaźnik ma wartość 4
    cout << *ocena;
    delete ocena;                               //kasujemy komórkę pamięci
    */

    /*
    const int n = 5;
    int tablica[n];
    int* wsk = tablica;

    for (int i = 0; i < n; i++) {
        *(wsk + i) = rand() % 10;               // znajdujemy wskaźnik, przechodzimy wskaźnikiem do przodu
        cout << *(wsk + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        *wsk = rand() % 10;
        cout << *wsk++ << " ";
    }
    */

    int n;
    cin >> n;
    int* tab = new int[n];                      // robienie ustalanej przez użytkownika tablicy wskaźnikami
                                                // (to jest to samo co "tab[n]" ale tablica dynamiczna)
    for (int i = 0; i < n; i++) {
        *tab++ = rand() % 10;                   // to nie "tab[i]" tylko "*(tab+i)"
    }
    tab -= n;
    for (int i = 0; i < n; i++) {
        cout << *tab++ << " ";
    }
    tab -= n;
    delete[] tab;                               // aby usunąć tablicę, potrzebny jest powrót do początku (tab -= n)
}

// Dynamiczna alokacja pamięci polega na przypisywaniu pamięci do naszego programu. Komórkę pamięci można potem usunąć.