#include "naglowek.h"

Prostokat::Prostokat(int pA, int pB){ // konstruktor parametryczny do prostopadłościanu
    a = pA;
    b = pB;
}

void Prostokat::pobierz(int &pA, int &pB){ // funkcja do odprywatyzowywania zmiennych
    pA = a;
    pB = b;
}

Prostopadloscian::Prostopadloscian(int pA, int pB){ // konstruktor parametryczny do prostopadłościanu
    a = pA;
    b = pB;
}

int Prostopadloscian::objetosc(){
    return a*b*h;
}

int Prostopadloscian::pole(){
    return 2*a*b + 2*a*h + 2*b*h;
}
