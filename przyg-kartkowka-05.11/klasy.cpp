#include <iostream>
#include <string>

using namespace std;

struct Data {
    int dd, mm, rrrr;
};

class Pracownik {
    public:
    string imie;
    string nazwisko;
    Data data_ur;
    void ustawDane(string, string);
    void ustawDate(Data);
    void wyswietlDane() {
        cout<<imie<<" "<<nazwisko<<" ";
        cout<<data_ur.dd<<"."<<data_ur.mm<<"."<<data_ur.rrrr<<endl;
    }
};

void Pracownik::ustawDane(string pImie, string pNazwisko){
    imie = pImie;
    nazwisko = pNazwisko;
}

void Pracownik::ustawDate(Data pData_ur){
    data_ur = pData_ur;
}

int main() {
    Pracownik p1;
    p1.imie = "Jan";
    p1.nazwisko = "Kowalski";
    p1.data_ur = {05,11,2021};
    p1.wyswietlDane();

    Pracownik p2;
    p2.ustawDane("Jewgienij", "Pietrowicz");
    p2.ustawDate({19,11,1990});
    p2.wyswietlDane();
}