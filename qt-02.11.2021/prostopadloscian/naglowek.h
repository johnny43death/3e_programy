#ifndef NAGLOWEK_H
#define NAGLOWEK_H

class Prostokat {
private:
    int a,b;
public:
    Prostokat(int,int);
    void pobierz(int&,int&);
};

class Prostopadloscian {
private:
    int h=5;
public:
    Prostopadloscian(int,int);
    int objetosc();
    int pole();
};

#endif // NAGLOWEK_H
