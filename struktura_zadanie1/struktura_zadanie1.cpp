#include <iostream>

using namespace std;

struct Telefon {
    string marka;
    string model;
    float cena;
    int ekran;
};

int main()
{
    Telefon telefon1 = { "Nokia", "3310", 19.99, 1 };
    cout << telefon1.marka << endl;
    cout << telefon1.model << endl;
    cout << telefon1.cena << endl;
    cout << telefon1.ekran << endl;
}