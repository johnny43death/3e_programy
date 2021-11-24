#include <iostream>

using namespace std;

struct Data {
    int dd, mm, rrrr;
};

class Uczen {
private:
    string imie;
    string nazwisko;
    Data datur;
    string klasa;
    int grupa;
public:
    Uczen();
    Uczen(string, string, Data, string, int);
    void dodajUcznia(string, string, Data, string, int);
    string pobierzImie();
    string pobierzNazwisko();
    int pobierzD();
    int pobierzM();
    int pobierzR();
    string pobierzKlase();
    int pobierzGrupe();
};

Uczen::Uczen() {
    imie = "";
    nazwisko = "";
    datur = { 00,00,0000 };
    klasa = "";
    grupa = 0;
};

Uczen::Uczen(string pImie, string pNazwisko, Data pDatur, string pKlasa, int pGrupa) {
    imie = pImie;
    nazwisko = pNazwisko;
    datur = pDatur;
    klasa = pKlasa;
    grupa = pGrupa;
}

void Uczen::dodajUcznia(string pImie, string pNazwisko, Data pDatur, string pKlasa, int pGrupa) {
    imie = pImie;
    nazwisko = pNazwisko;
    datur = pDatur;
    klasa = pKlasa;
    grupa = pGrupa;
}

string Uczen::pobierzImie() {
    return imie;
}

string Uczen::pobierzNazwisko() {
    return nazwisko;
}

int Uczen::pobierzD() {
    return datur.dd;
}

int Uczen::pobierzM() {
    return datur.mm;
}

int Uczen::pobierzR() {
    return datur.rrrr;
}

string Uczen::pobierzKlase() {
    return klasa;
}

int Uczen::pobierzGrupe() {
    return grupa;
}

int main()
{
    string imie;
    string nazwisko;
    Data datur;
    string klasa;
    int grupa;

    cin >> imie >> nazwisko >> datur.dd >> datur.mm >> datur.rrrr >> klasa >> grupa;
    Uczen u1;
    u1.dodajUcznia(imie, nazwisko, datur, klasa, grupa);
    cout << "Imie: " << u1.pobierzImie() << endl;
    cout << "Nazwisko: " << u1.pobierzNazwisko() << endl;
    cout << "Data: " << u1.pobierzD() << "." << u1.pobierzM() << "." << u1.pobierzR() << endl;
    cout << "Klasa: " << u1.pobierzKlase() << endl;
    cout << "Grupa: " << u1.pobierzGrupe() << endl;
}