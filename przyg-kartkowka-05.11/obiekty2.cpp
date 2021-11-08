#include <iostream>
#include <string>

using namespace std;

class Prostopadloscian {
    public:
    double a,b,h;
    Prostopadloscian();
    Prostopadloscian(double, double, double);
    void obliczDlugoscC();
    void obliczPPB();
    void obliczObjetosc();
    void wyswietlDane();
};

Prostopadloscian::Prostopadloscian(){ // domyślny
    a = 4;
    b = 5;
    h = 20;
}

Prostopadloscian::Prostopadloscian(double pA, double pB, double pH){ // parametryczny
    a = pA;
    b = pB;
    h = pH;
}

// funkcja void sprawia że nie jest konieczne tworzenie globalnych zmiennych do obliczeń
void Prostopadloscian::obliczDlugoscC(){ 
    double dC = (4*a)+(4*b)+(4*h);
    cout<<"dlugosc calkowita: "<<dC<<endl;
}

void Prostopadloscian::obliczPPB(){
    double PPB = (2*(a*h))+(2*(b*h));
    cout<<"PPB: "<<PPB<<endl;
}

void Prostopadloscian::obliczObjetosc(){
    double V = a*b*h;
    cout<<"objetosc: "<<V<<endl;
}

void Prostopadloscian::wyswietlDane(){
    cout<<"a: "<<a<<"b: "<<b<<"h: "<<h<<endl;
}

int main(){
    double a, b, h;
    cout<<"Podaj dlugosc";
    cin>>a;
    cout<<"Podaj szerokosc";
    cin>>b;
    cout<<"Podaj wysokosc";
    cin>>h;
    
    Prostopadloscian p1;
    p1.obliczDlugoscC();
    p1.obliczObjetosc();
    p1.obliczPPB();
    p1.wyswietlDane();
    Prostopadloscian p2(a, b, h);
    p2.obliczDlugoscC();
    p2.obliczObjetosc();
    p2.obliczPPB();
    p2.wyswietlDane();
}