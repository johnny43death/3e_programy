#include <iostream>
using namespace std;

struct Date
{
    int dd, mm, rr;
};

class Notatka{
private:
    Date date;
    int a;
    int b;

public:
    ~Notatka();
    Notatka();
    Notatka(Date, int, int); 
    int oblicz();
    void wyswietlDane();
};

Notatka::~Notatka() {
    cout << "DESTRUKCJA" << endl;
}

Notatka::Notatka() {
    date.dd = 1;
    date.mm = 1;
    date.rr = 1999;
    a = 1;
    b = 2;
}

Notatka::Notatka(Date pDate, int pA, int pB) {
    date = pDate;
    a = pA;
    b = pB;
}

/*Notatka::Notatka(Date pDate, int pA, int pB) : date(pDate), a(pA), b(pB) {

}*/

int Notatka::oblicz() {
    return a * b;
}

void Notatka::wyswietlDane() {
    cout << "Dane: " << date.dd << "." << date.mm << "." << date.rr << " " << a << " " << b << endl;
}

int main(){
    Notatka notatka1;

    Date data;
    data.dd = 1;
    data.mm = 1;
    data.rr = 1999;

    Notatka notatka2(data, 2, 4);

    int wynik1 = notatka1.oblicz();
    int wynik2 = notatka2.oblicz();

    notatka1.wyswietlDane();
    notatka2.wyswietlDane();

    cout << "Wyniki: " << wynik1 << " " << wynik2 << endl;
    return 0;
}