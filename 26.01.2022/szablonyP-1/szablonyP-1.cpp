#include <iostream>

using namespace std;

/*template <typename T>
T polePr(T bok1, T bok2, int ile) {
	return bok1 * bok2 * ile;
}
template <>
int polePr(int bok1, int bok2, int ile) {
	return (bok1 + bok2) * ile;
}

int main()
{
	int bok1 = 5, bok2 = 3;
	cout << polePr(bok1, bok2, 5) << endl;

	double bok1f = 5.3, bok2f = 3.4;
	cout << polePr(bok1f, bok2f, 7) << endl;
}*/

template <class T>
class Prostokat {
public:
	T bok1, bok2;
	T pole() {
		return bok1 * bok2;
	}
	T obwod();
};

template<>
class Prostokat <int> {
	int bok1, bok2;
	int pole() {
		return bok1 * bok2;
	}
	int obwod() {
		return bok1 * 2 + bok2 * 2;
	}
};

int main()
{
	Prostokat<int> p1{ 3,5 };
	cout << p1.pole() << endl;
	cout << p1.obwod() << endl;

	Prostokat<double> p2{ 3.5,5.5 };
	cout << p2.pole() << endl;
	cout << p2.obwod() << endl;
}

template<class T>
T Prostokat<T>::obwod() {
	return bok1 * 2 + bok2 * 2;
}
