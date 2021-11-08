#include <iostream>
#include <math.h>
using namespace std;

struct Punkt { 
	int x, y;
};

class Odleglosc {
private:
	Punkt A;
	Punkt B;

public:
	~Odleglosc();
	Odleglosc();
	Odleglosc(Punkt, Punkt);
	double oblicz();
};

Odleglosc::~Odleglosc() {}

Odleglosc::Odleglosc() {
	A = { 1, 1 };
	B = { 2, 2 };
}

//delegacja (wywołanie) konstruktora domyślnego w parametrycznym
//(zazwyczaj potrzebne, gdy zdefiniowane zmienne są prywatne)
Odleglosc::Odleglosc(Punkt pA, Punkt pB) : A(pA), B(pB) {}

double Odleglosc::oblicz() {
	return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
}

int main() {
	Punkt A, B;
	cout << "Wspolrzedna x punktu A: "; cin >> A.x;
	cout << "Wspolrzedna y punktu A: "; cin >> A.y;
	cout << "Wspolrzedna x punktu B: "; cin >> B.x;
	cout << "Wspolrzedna y punktu B: "; cin >> B.y;
	Odleglosc odleglosc(A, B);
	cout << odleglosc.oblicz() << endl;
}