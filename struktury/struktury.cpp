#include <iostream>
#include <string>
using namespace std;

//obiekty w c++!!!!!

/*struct Data {
    int dd, mm, rr;
};

struct Pracownik (uczen) {
    string imie;
    string nazwisko;
    int nr;
    Data data_urodzenia; //odwołanie do zmiennych w strukturze "data"
    int oceny[3];
};*/

/*struct Uczen {
    string imie;
    string nazwisko;
    int nr;
};*/

union Ocena {
    short ocena_c;
    float ocena_r;
};

int main()
{
    /*
    Pracownik pracownik1 = { "jan", "kowalski", 420 };
    //Pracownik pracownik1 { "jan", "kowalski", 420 };
    cout << pracownik1.imie << " " << pracownik1.nazwisko << " " << pracownik1.nr << endl;
    Pracownik pracownik2{}; //pusty pracownik
    pracownik2.imie = "adam";

    cout << pracownik2.imie << " " << pracownik2.nazwisko << " " << pracownik2.nr << endl;
    */

    /*Uczen u1{"adam", "nowak", 13, {30,10,2000}, {1,1,2}};
    cout << u1.imie << " " << u1.nazwisko << " " << u1.nr << endl
        << u1.data_urodzenia.dd << "." << u1.data_urodzenia.mm << "." << u1.data_urodzenia.rr << endl
        << u1.oceny[0] << " " << u1.oceny[1] << " " << u1.oceny[2];

    cout << endl;

    Uczen* wsk = &u1; //stworzenie wskaźnika i przypisanie go do struktury
    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->nr << endl
        << wsk->data_urodzenia.dd << "." << wsk->data_urodzenia.mm << "." << wsk->data_urodzenia.rr << endl
        << wsk->oceny[0] << " " << wsk->oceny[1] << " " << wsk->oceny[2];*/

    /*Uczen* wsk = new Uczen;
    wsk->imie = "jan";
    wsk->nazwisko = "kowalski";
    wsk->nr = 15;
    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->nr;
    delete wsk;*/
    Ocena ocena = { ocena.ocena_c = 4 };
    cout << ocena.ocena_c << endl;

    ocena.ocena_r = 3.5;
    cout << ocena.ocena_r << endl;
    cout << ocena.ocena_c << endl;
}