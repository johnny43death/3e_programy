#include <iostream>
#include <string>

using namespace std;

/*class Osoba {
private:
    string imie, nazwisko;
    friend class Pracownik;
    friend class Uczen;
public:
    void ustawImie(string oImie) {
        imie = oImie;
    }
    void ustawNazwisko(string oNazwisko) {
        nazwisko = oNazwisko;
    }
};

class Pracownik {
private:
    string stanowisko;
public:
    void wypisz(Osoba osoba) {
        cout<<osoba.imie<<" "<<osoba.nazwisko<<" "<<stanowisko;
    }
    void ustawPrace(string oStan) {
        stanowisko = oStan;
    }
};

class Uczen {
private:
    string klasa;
public:
    void wypisz(Osoba osoba) {
        cout<<osoba.imie<<" "<<osoba.nazwisko<<" "<<klasa<<" ";
    }
    void ustawKlase(string oKlasa) {
        klasa = oKlasa;
    }
};

int main() {
    Osoba o;
    o.ustawImie("Jan");
    o.ustawNazwisko("Knot");

    Pracownik p;
    p.ustawPrace("Hitmen");
    p.wypisz(o);

    o.ustawImie("Tadeusz");
    o.ustawNazwisko("Nalepa");

    Uczen u;
    u.ustawKlase("3E");
    u.wypisz(o);
}*/

class Osoba;

class Uczen {
private:
    string _klasa;
public:
    void ustawKlase(string klasa){
        _klasa = klasa;
    };
    void wypisz(Osoba pOsoba);
};

class Osoba {
private:
    string _imie, _nazwisko;
public:
    void ustaw(string imie, string nazwisko) {
        _imie = imie;
        _nazwisko = nazwisko;
    }
    string getImie() {
        return _imie;
    }
    string getNazwisko() {
        return _nazwisko;
    }
    friend void Uczen::wypisz(Osoba pOsoba);
};

void Uczen::wypisz(Osoba pOsoba){
    cout << pOsoba._imie << pOsoba._nazwisko << endl << _klasa << endl;
}

int main() {
    Osoba o1;
    Uczen u1;
    o1.ustaw("Jan", "Knot");
    u1.ustawKlase("3E");
    u1.wypisz(o1);
}