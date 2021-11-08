#include <iostream>
#include <string>

using namespace std;

struct Data {
    int dd, mm, rrrr;
};

class Pracownik {
    public:
    int id;
    string imie, nazwisko;
    Data data_ur;
    Pracownik();
    Pracownik(int, string);
    Pracownik(int, string, string, Data);
    void wyswietlDane();
};

void Pracownik::wyswietlDane() {
    cout<<id<<" "<<imie<<" "<<nazwisko<<" ";
    cout<<data_ur.dd<<"."<<data_ur.mm<<"."<<data_ur.rrrr<<endl;
}

Pracownik::Pracownik(){
    id = 1;
    imie = "Janusz";
    nazwisko = "Grzyb";
    data_ur = {06, 11, 2021};
}

Pracownik::Pracownik(int pId, string pImie){
    id = pId;
    imie = pImie;
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko, Data pDatur){
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    data_ur = pDatur;
}

int main() {
    Pracownik pracownik1;
    Pracownik pracownik2(2, "Kosta");
    Pracownik pracownik3(3, "Armin", "Penelli", {10, 12, 1999});

    pracownik1.wyswietlDane();
    pracownik2.wyswietlDane();
    pracownik3.wyswietlDane();
}