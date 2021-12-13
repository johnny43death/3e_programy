#include <iostream>
#include <ctime>

using namespace std;

//klasy abstrakcyjne istnieją, aby wszystko było przejrzyste
class Info {
public: 
    virtual void wyswietlDane() = 0;
};

class Osoba {
public:
    string imie, nazwisko;
};

class Pracownik : public Osoba, public Info {
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << endl;
    }
};

class Uczen : public Osoba, public Info {
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << endl;
    }
};

int main()
{
    Pracownik* p1 = new Pracownik;
    p1->imie = "jan";
    p1->nazwisko = "kowalski";
    p1->wyswietlDane();

    Uczen* u1 = new Uczen;
    u1->imie = "adam";
    u1->nazwisko = "nowak";
    u1->wyswietlDane();
}