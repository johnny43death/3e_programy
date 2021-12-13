#include <iostream>
#include <cmath>
// PRZYJACIELE METODY
using namespace std;

/*class Promien;

class Kolo {
public:
    double pole(Promien pPromien);
    double obwod(Promien pPromien);
};

class Promien {
private:
    double _r;
public:
    void setRadius(double r) {
        _r = r;
    }
    double getRadius(double r) {
        return _r;
    }
    // funkcja zaprzyjaźniona. definicja metody z innej klasy
    friend double Kolo::pole(Promien);
    friend double Kolo::obwod(Promien);
};

double Kolo::pole(Promien pPromien) {
    return 3.14 * pPromien._r * pPromien._r;
}
double Kolo::obwod(Promien pPromien) {
    return 2 * 3.14 * pPromien._r;
}

int main()
{
    Promien promien;
    promien.setRadius(1);

    Kolo kolo;
    //gdyby nie było przyjaciół (friend), użyli byśmy getterów:
    // cout << getRadius(promien);
    cout << kolo.pole(promien) << endl;
    cout << kolo.obwod(promien) << endl;
    //podobnie jak w prawdziwym życiu przyjaźń NIE PODLEGA DZIEDZICZENIU
    //podobnie jak w prawdziwym życiu przyjaźń musi być odwzajemniona
}
*/

// PRZYJACIELE KLASY

class Promien {
    double _r;
public:
    void setRadius(double);
    double getRadius();

    // klasy zaprzyjaźnione
    friend class Kolo;
    friend class Kula;
};

void Promien::setRadius(double r) {
    _r = r;
}
double Promien::getRadius() {
    return _r;
}

class Kolo {
public:
    double pole(Promien);
    double obwod(Promien);
};
double Kolo::pole(Promien promien) {
    return 3.14 * promien._r * promien._r;
}
double Kolo::obwod(Promien promien) {
    return 2 * 3.14 * promien._r;
}

class Kula {
public:
    double objetosc(Promien);
    double obwod(Promien);
};
double Kula::objetosc(Promien promien) {
    return double(4) / double(3) * 3.14 * pow(promien._r, 3);
}
double Kula::obwod(Promien promien) {
    return 4 * 3.14 * pow(promien._r, 2);
}

int main() {
    Promien promien;
    Kolo kolo;
    Kula kula;

    promien.setRadius(1);
    cout << kolo.pole(promien) << endl;
    cout << kolo.obwod(promien) << endl;

    promien.setRadius(2);
    cout << kula.objetosc(promien) << endl;
    cout << kula.obwod(promien) << endl;
}