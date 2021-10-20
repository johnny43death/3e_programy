#include <iostream>

using namespace std;

class Uczen {
public:
	int id;
	string imie, nazwisko;
	string klasa;
	int grupa;
	Uczen();
	Uczen(int, string, string, string, int);
	void wyswietlDane();
};

void Uczen::wyswietlDane() {
	cout << id << " " << imie << " " << nazwisko << endl
		<< klasa << " " << grupa << endl;
}

Uczen::Uczen() { 
	id = 43;
	imie = "Sample";
	nazwisko = "Text";
	klasa = "3E";
	grupa = 2;
}

Uczen::Uczen(int pId, string pImie, string pNazwisko, string pKlasa, int pGrupa) {
	id = pId;
	imie = pImie;
	nazwisko = pNazwisko;
	klasa = pKlasa;
	grupa = pGrupa;
}

int main() {
	int id, grupa;
	string imie, nazwisko, klasa;

	cout << "Podaj ID: ";
	cin >> id;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj klase: ";
	cin >> klasa;
	cout << "Podaj grupe: ";
	cin >> grupa;

	Uczen u1;
	u1.wyswietlDane();

	Uczen u2(id, imie, nazwisko, klasa, grupa);
	u2.wyswietlDane();
}