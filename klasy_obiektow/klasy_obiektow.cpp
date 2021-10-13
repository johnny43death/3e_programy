#include <iostream>

using namespace std;

/*class Pracownik {
public:
    string imie, nazwisko;
    void ustawImie(string);
    void ustawNazwisko(string);
    void wyswietlDane() {
        cout << imie << " " << nazwisko << endl;
    }
};

void Pracownik::ustawImie(string pImie) { //definicja funkcji ze wstawianiem
    imie = pImie;
}

void Pracownik::ustawNazwisko(string pNazwisko) {
    nazwisko = pNazwisko;
}

int main()
{
    Pracownik p1; //sposób 1: klasycznie
    p1.imie = "jan";
    p1.nazwisko = "kowalski";
    p1.wyswietlDane();

    Pracownik p2; //sposób 2: uprzednio zdefiniowanymi funkcjami
    p2.ustawImie("adam");
    p2.ustawNazwisko("nowak");
    p2.wyswietlDane();
}*/

/*class Prostokat {
public:
    float bok1, bok2;
    float pole();
    float obwod();
};

float Prostokat::pole() {
    return bok1 * bok2;
}

float Prostokat::obwod() {
    return 2 * bok1 + 2 * bok2;
}

int main() {
    Prostokat p1;
    p1.bok1 = 5;
    p1.bok2 = 2.5;
    cout << p1.pole() << " " << p1.obwod();
}*/

/*class Pracownik {
public:
    static string szkola;
    static string stanowisko;
    string imie, nazwisko;
    static void ustawStanowisko(string pStanowisko) { // funkcja zmienia domyślną wartość
        stanowisko = pStanowisko;
    }
    void wyswietlDane();
};

string Pracownik::szkola = "TKKOM";
string Pracownik::stanowisko = "nauczyciel"; //ustawia domyślną wartość

void Pracownik::wyswietlDane() {
    cout << imie << " " << nazwisko << endl << szkola << endl << stanowisko << endl;
}

int main() {
    Pracownik p1;
    p1.imie = "jan";
    p1.nazwisko = "kowalski";
    p1.wyswietlDane();
    Pracownik::ustawStanowisko("portier");
    Pracownik p2;
    p2.imie = "adam";
    p2.nazwisko = "nowak";
    p2.wyswietlDane();
    p1.wyswietlDane();*/

/*class Pracownik{
public:
    string imie, nazwisko;
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

    Pracownik* w_pracownik1 = new Pracownik();
    w_pracownik1->imie = "jan";
    w_pracownik1->nazwisko = "kowalski";
    w_pracownik1->wyswietlDane();
    delete w_pracownik1;
}*/

/*class Pracownik { //z argumentem
public:
    string imie, nazwisko;
    void wyswietlDane();
};
void Pracownik::wyswietlDane() {
    cout << imie << " " << nazwisko << endl;
}

Pracownik& pobierzDane(Pracownik&);
void wyswietlDane(const Pracownik&);

int main() {
    Pracownik pracownik;
    pracownik = pobierzDane(pracownik);
    wyswietlDane(pracownik);
}

Pracownik& pobierzDane(Pracownik& p) {
    cin >> p.imie;
    cin >> p.nazwisko;
    return p;
}

void wyswietlDane(const Pracownik& p) {
    cout << p.imie << " " << p.nazwisko << endl;
}*/

/*class Pracownik { //ze wskaźnikiem
public:
    string imie, nazwisko;
    void wyswietlDane();
};
void Pracownik::wyswietlDane() {
    cout << imie << " " << nazwisko << endl;
}

Pracownik* pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);

int main() {
    Pracownik* w_pracownik = new Pracownik();
    pobierzDane(w_pracownik);
    wyswietlDane(w_pracownik);
    delete w_pracownik;
}

Pracownik* pobierzDane(Pracownik* p) {
    cin >> p->imie;
    cin >> p->nazwisko;
    return p;
}

void wyswietlDane(const Pracownik* p) {
    cout << p->imie << " " << p->nazwisko << endl;
}*/

/*struct Data { //konstruktory
    int dd, mm, rr;
};

class Pracownik { 
public:
    int id{ -1 };
    string imie{ "aaaa" }, nazwisko{"nnnn"};
    Data data_urodzenia{ 31,12,1899 };
    void wyswietlDane();
};
void Pracownik::wyswietlDane() {
    cout << id << " " << imie << " " << nazwisko << endl << data_urodzenia.dd << "." 
        << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
}

int main() {
    Pracownik pracownik;
    pracownik.wyswietlDane();
}*/

struct Data { //konstruktor domyślny
    int dd, mm, rr;
};

class Pracownik {
public:
    int id;
    string imie, nazwisko;
    Data data_urodzenia;
    Pracownik() { //konstruktor domyślny uruchamia się kiedy obiekt jest pusty
        id = -1;
        imie = "aaaa";
        nazwisko = "nnnn";
        data_urodzenia = { 31,12,1899 };
    }
    Pracownik(int, string, string); //deklaracja prototypu
    void wyswietlDane();
};
Pracownik::Pracownik(int pId, string pImie, string pNazwisko) {
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
}
void Pracownik::wyswietlDane() {
    cout << id << " " << imie << " " << nazwisko << endl << data_urodzenia.dd << "."
        << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
}

int main() {
    Pracownik pracownik1;
    pracownik1.wyswietlDane();

    Pracownik pracownik2(1, "adam", "nowak");
    pracownik2.wyswietlDane();

    Pracownik pracownik3;
    pracownik3.imie = "jan";
    pracownik3.nazwisko = "kowalski";
    pracownik3.wyswietlDane();
}