#include <iostream>
#include <cmath>

using namespace std;

/*template <typename zmienna>
zmienna obwodKwadratu(zmienna a) {
    return 4 * a;
}

template <typename zmienna>
zmienna poleKwadratu(zmienna a) {
    return a * a;
}

template <typename zmienna>
zmienna obwodProstokata(zmienna a, zmienna b) {
    return (2*a)+(2*b);
}

template <typename zmienna>
zmienna poleProstokata(zmienna a, zmienna b) {
    return a * b;
}

template <typename zmienna>
zmienna obwodKola(zmienna r) {
    return 2 * 3.14 * r;
}

template <typename zmienna>
zmienna poleKola(zmienna r) {
    return 3.14 * r * r;
}

int main() {
    int a1, b1, r1;
    float a2, b2, r2;

    cin >> a1 >> a2 >> b1 >> b2 >> r1 >> r2;

    cout << "Obwod Kwadratu: " << obwodKwadratu(a1) << endl;
    cout << "Obwod Kwadratu: " << obwodKwadratu(a2) << endl;
    cout << "Pole Kwadratu: " << poleKwadratu(a1) << endl;
    cout << "Pole Kwadratu: " << poleKwadratu(a2) << endl;
    cout << "Obwod Prostokata: " << obwodProstokata(a1, b1) << endl;
    cout << "Obwod Prostokata: " << obwodProstokata(a2, b2) << endl;
    cout << "Pole Prostokata: " << poleProstokata(a1, b1) << endl;
    cout << "Pole Prostokata: " << poleProstokata(a2, b2) << endl;
    cout << "Obwod Kola: " << obwodKola(r1) << endl;
    cout << "Obwod Kola: " << obwodKola(r2) << endl;
    cout << "Pole Kola: " << poleKola(r1) << endl;
    cout << "Pole Kola: " << poleKola(r2) << endl;
}*/

template <typename T>
class Prostokat {
public: 
    T a, b;
    T poleProstokata() {
        return a * b;
    }
    T obwodProstokata() {
        return (2*a) * (2*b);
    }
};

template <>
class Prostokat <float> {
public: 
    float a, b;
    float poleProstokata() {
        return a * b;
    }
    float obwodProstokata() {
        return (2*a) * (2*b);
    }
};

int main() {
    Prostokat <int> p1 = Prostokat <int>();
    Prostokat <float> p2 = Prostokat <float>();

    cin >> p1.a >> p1.b >> p2.a >> p2.b;

    cout << "Obwod Prostokata: " << p1.obwodProstokata() << endl;
    cout << "Obwod Prostokata: " << p2.obwodProstokata() << endl;
    cout << "Pole Prostokata: " << p1.poleProstokata() << endl;
    cout << "Pole Prostokata: " << p2.poleProstokata() << endl;
}