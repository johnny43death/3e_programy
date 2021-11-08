#include <iostream>
#include <string>

using namespace std;

class Uczen {
    public:
    int id;
    string imie, nazwisko, klasa, grupa;
    Uczen();
    Uczen(int, string, string, string, string);
    void wyswietlDane();
};

void Uczen::wyswietlDane(){
    cout<<"Id: "<<id<<"\nImie: "<<imie<<"\nNazwisko: "<<nazwisko<<"\nKlasa: "<<klasa<<"\nGrupa: "<<grupa<<endl;
}

Uczen::Uczen(){ // domyślny
    id = 1;
    imie = "Jan";
    nazwisko = "Kowalski";
    klasa = "3E";
    grupa = "B";
}

// parametryczny
Uczen::Uczen(int pId, string pImie, string pNazwisko, string pKlasa, string pGrupa){
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    klasa = pKlasa;
    grupa = pGrupa;
}

int main() {
    int cinid;
    string cinimie, cinnazwisko, cinklasa, cingrupa;

    cin>>cinid>>cinimie>>cinnazwisko>>cinklasa>>cingrupa;

    Uczen u1;
    Uczen u2(cinid, cinimie, cinnazwisko, cinklasa, cingrupa);
    u1.wyswietlDane();
    u2.wyswietlDane();
}