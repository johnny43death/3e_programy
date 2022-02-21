#include <iostream>

using namespace std;

template <class T>
class Trapez {
private:
	T a, b, h;
public:
	T pole() {
		return ((a + b) * h) / 2;
	}
	T set(T _a, T _b, T _h) {

	}
};

int main()
{
	Trapez<int> p1{ 3, 5, 4 };
	cout << p1.pole() << endl;

	Prostokat<double> p2{ 3.5,5.5 };
	cout << p2.pole() << endl;
	cout << p2.obwod() << endl;
}