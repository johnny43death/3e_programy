#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int i = 0, tab[5], n = 5, licznik = 0;
    bool posortowane = false;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 10;
    }
    
    while (posortowane == false) {
        //cout << "*";
        licznik++;
        posortowane = true;
        for (int i = 0; i < n - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                posortowane = false;
                break;
            }
        }

        if (posortowane == false) {
            for (int i = 0; i < n - 1; i++) {
                swap(tab[rand() % n], tab[rand() % n]);
            }
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << ":" << licznik;
}