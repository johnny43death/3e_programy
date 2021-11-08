#include <iostream>
using namespace std;

class Prostokat {
public:
    int bok1, bok2;
    void obwod();
    int powierzchnia();
    Prostokat();
    Prostokat(const Prostokat&);
};

Prostokat::Prostokat() { // konstruktor domyślny
    bok1 = 5;
    bok2 = 4;
}

Prostokat::Prostokat(const Prostokat& pierwowzor) { // konstruktor kopiujący
    bok1 = pierwowzor.bok1;
    bok2 = pierwowzor.bok2;
}

void Prostokat::obwod() { // niezwracająca funkcja obliczająca obwód
    int obwod = (bok1 + bok2) * 2;
    cout << "Obwod" << obwod;
}

int Prostokat::powierzchnia() { // zwracająca funkcja obliczająca pole
    int powierzchnia = bok1 * bok2;
    return powierzchnia;
}

int main() {
    Prostokat schowek;
    Prostokat pomieszczenie2(schowek); // delegacja (wywołanie) k. kopiującego
    Prostokat pomieszczenie3(schowek); // podajesz nazwę nowego obiektu i nawiązujesz do istniejącego
    Prostokat pomieszczenie4(schowek);
    int powierzchniaMieszkania = schowek.powierzchnia() + pomieszczenie2.powierzchnia() + pomieszczenie3.powierzchnia() + pomieszczenie4.powierzchnia();
    cout << "powierzchnia mieszkania: " << powierzchniaMieszkania;
}