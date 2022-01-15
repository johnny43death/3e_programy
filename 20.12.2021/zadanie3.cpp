#include <iostream>
using namespace std;

template <class T>
class Prostokat{
public:
    T a, b;
    T poleProstokata() {
        return a * b;
    }
    T obwodProstokata() {
        return 2 * a + 2 * b;
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
        return 2 * a + 2 * b;
    }
};

template <class T>
class Kolo{
public:
    T r;
    T poleKola() {
        return 3,14 * r * r;
    }
    T obwodKola() {
        return 2 * 3,14 * r;
    }
};
template <>
class Kolo <float> {
public:
    float r;
    float poleKola() {
        return 3,14 * r * r;
    }
    float obwodKola() {
        return 2 * 3,14 * r;
    }
};

int main(){
    Prostokat <int> p1 = Prostokat<int>();
    Prostokat <float> p2 = Prostokat<float>();
    Kolo <int> k1 = Kolo<int>();
    Kolo <float> k2 = Kolo<float>();

    cin >> p1.a >> p1.b;
    cin >> p2.a >> p2.b;
    cin >> k1.r;
    cin >> k2.r;
    
    cout << p1.poleProstokata() << endl;
    cout << p2.poleProstokata() << endl;
    cout << p1.obwodProstokata() << endl;
    cout << p2.obwodProstokata() << endl;
    cout << k1.poleKola() << endl;
    cout << k2.poleKola() << endl;
    cout << k1.obwodKola() << endl;
    cout << k2.obwodKola() << endl;
}