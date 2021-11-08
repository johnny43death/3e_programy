#include <iostream>
#include <string>

using namespace std;

class Prostokat {
    public:
    double a, b, obwod, pole;
    Prostokat();
    Prostokat(double, double);
    double obliczObwod();
    double obliczPole();
    void wyswietlDane();
};

double Prostokat::obliczObwod() {
    obwod = (2*a)+(2*b);
    return obwod;
}

double Prostokat::obliczPole() {
    pole = a*b;
    return pole;
}

void Prostokat::wyswietlDane() {
    cout<<"\nA: "<<a<<"\nB: "<<b<<"\nObwod: "<<obwod<<"\nPole: "<<pole<<endl;
}

Prostokat::Prostokat(){
    a = 4;
    b = 5;
}

Prostokat::Prostokat(double pA, double pB){
    a = pA;
    b = pB;
}

int main() {

    int boka3, bokb3;
    cout<<"Podaj wymiary prostokata 3: ";
    cin>>boka3>>bokb3;
    Prostokat prostokat1;
    Prostokat prostokat2(6, 20);
    Prostokat prostokat3(boka3, bokb3);

    prostokat1.obliczObwod();
    prostokat1.obliczPole();
    prostokat2.obliczObwod();
    prostokat2.obliczPole();
    prostokat3.obliczObwod();
    prostokat3.obliczPole();

    prostokat1.wyswietlDane();
    prostokat2.wyswietlDane();
    prostokat3.wyswietlDane();
}