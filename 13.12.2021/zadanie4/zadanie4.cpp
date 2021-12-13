#include <iostream>

using namespace std;

class Osoba;

class Uczen {
    string _klasa;
public:
    void setClass(string klasa) {
        _klasa = klasa;
    };
    void wypisz(Osoba pOsoba);
};

class Osoba {
    string _imie, _nazwisko;
public:
    void set(string imie, string nazwisko) {
        _imie = imie;
        _nazwisko = nazwisko;
    }
    string getName() {
        return _imie;
    }
    string getSurname() {
        return _nazwisko;
    }
    friend void Uczen::wypisz(Osoba);
};

void Uczen::wypisz(Osoba pOsoba) {
    cout << pOsoba._imie << " " << pOsoba._nazwisko << endl << _klasa << endl;
}

int main()
{
    Osoba o1;
    Uczen u1;
    o1.set("Jan", "Kowalski");
    u1.setClass("3e");
    u1.wypisz(o1);

    Osoba o2;
    o2.set("adam", "nowak");
    u1.wypisz(o2);
}