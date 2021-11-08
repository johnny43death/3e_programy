#include <iostream>
#include <string>

using namespace std;

struct Data {
    int dd, mm, rrrr;
};

class Pracownik{
public:
    string imie, nazwisko;
    Data data_ur;
    void wyswietlDane();
};

void Pracownik::wyswietlDane() {
    cout << imie << " " << nazwisko << endl;
}

int main() {
    Pracownik pracownik;
    Pracownik* w_pracownik = &pracownik;
    w_pracownik->imie = "jan";
    w_pracownik->nazwisko = "kowalski";
    w_pracownik->wyswietlDane();
    pracownik.wyswietlDane();

    Pracownik* w_pracownik1 = new Pracownik();
    w_pracownik1->imie = "jan";
    w_pracownik1->nazwisko = "kowalski";
    w_pracownik1->wyswietlDane();
    delete w_pracownik1;
}