#include <iostream>
using namespace std;

int main()
{
//Zadania liczbowe
    int x;
    int xD;
    
    cout << "Podaj liczby: ";
    cin >> x;
    //cin >> xD;

    //zadanie z nwd
    /*if (x != xD) {
        if (x > xD) {
            x -= xD;
            cout << "NWD wynosi: " << x;
        }
        else {
            xD -= x;
            cout << "NWD wynosi: " << xD;
        }
    }*/
    //zadanie z liczbami pierwszymi

    bool pierwsza = true;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            pierwsza = false;
        }
    }

//Zadanie z konwersją na liczbę binarną, liczenie jedynek i zer i sprawdzanie czy to liczba fibinarna
    /*int x, n[8], i = 0, a = 0, b = 0, czyfi = 0;

    for (int j = 0; j < 8; j++) {
        n[j] = 0;
    }

    cout << "Podaj liczbe (0-255): ";
    cin >> x;*/

    /*while (x != 0) {
        n[i++] = x % 2;
        x /= 2;
    }

    for (int j = 7; j >= 0; j--) {
        cout << n[j];
        if (n[j] == 0) {
            a++;
        }
        else {
            b++;
        }

        if (n[j] == 1 && n[j + 1] == 1) {
            czyfi = 1;
        }
    }
    
    cout << " : " << b << " : " << a << " : ";
    if (czyfi == 1){
        cout << "N";
    }
    else {
        cout << "T";
    }*/
}