#include <iostream>
using namespace std;

template <class T>
class Trapez;

template <class T>
class Figura {
private: 
    T H;
public:
    T objetosc(Trapez<T> podstawa) {
        return podstawa.pole() * H;
    }
    void setFigura(T H_) {
        H = H_;
    }
};

template <class T>
class Trapez {
private: 
    T a, b, h;
    T pole() {
        return (a + b) * h * 0.5;
    }
    friend class Figura<T>;
public:
    void setTrapez(T a_, T b_, T h_) {
        a = a_;
        b = b_;
        h = h_;
    }
};

int main() {
    Trapez <double> t1;
    t1.setTrapez(5, 6.5, 0.35);

    Figura <double> f1;
    f1.setFigura(9.16);
    cout << f1.objetosc(t1);
}