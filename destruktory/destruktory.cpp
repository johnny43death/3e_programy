#include <iostream>

using namespace std;

class Prostokat {
private:
	double bok1;
	double bok2;
public:
	~Prostokat() {
		cout << "--------DESTRUKTOR--------" << endl;
	};
	Prostokat();
	Prostokat(double, double);
	void wyswietlDane();
};

Prostokat::Prostokat() {
	bok1 = 2;
	bok2 = 1;
}

Prostokat::Prostokat(double pBok1, double pBok2) : Prostokat::Prostokat() {
	bok1 = pBok1;
	bok2 = pBok2;
}

void Prostokat::wyswietlDane() {
	cout << bok1 << " " << bok2 << endl;
}

int main() {
	{
		Prostokat p1;
		p1.wyswietlDane();
	}

	Prostokat* w_p2 = new Prostokat(3, 5);
	w_p2->wyswietlDane();

	Prostokat p3(11, 15);
	delete w_p2;
	p3.wyswietlDane();
}