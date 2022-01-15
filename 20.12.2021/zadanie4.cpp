#include <iostream>
using namespace std;

template <typename T>
T srednia_arytmetyczna() {
	T srednia, polski, angielski, matematyka, informatyka;
	cout << "Ocena semestralna z języka polskiego: ";
	cin >> polski;
	cout << "\nOcena semestralna z języka angielskiego: ";
	cin >> angielski;
	cout << "\nOcena semestralna z matematyki: ";
	cin >> matematyka;
	cout << "\nOcena semestralna z informatyki: ";
	cin >> informatyka;
	srednia = (polski + angielski + matematyka + informatyka) / 4;
	return srednia;
}
template <typename T>
T srednia_wazona() {
	float wagapol = 0.1, wagaang = 0.2, wagainf = 0.3, wagamat = 0.4;
	T srednia, polski, angielski, matematyka, informatyka;
	cout << "Ocena semestralna z języka polskiego: ";
	cin >> polski;
	cout << "\nOcena semestralna z języka angielskiego: ";
	cin >> angielski;
	cout << "\nOcena semestralna z matematyki: ";
	cin >> matematyka;
	cout << "\nOcena semestralna z informatyki: ";
	cin >> informatyka;
	srednia = ((polski * wagapol) + (angielski * wagaang) + (informatyka * wagainf) + (matematyka * wagamat)) / (wagapol + wagaang + wagainf + wagamat);
	return srednia;
}

int main()
{
	cout << srednia_arytmetyczna<float>() << endl;
	cout << srednia_wazona<float>() << endl;
}