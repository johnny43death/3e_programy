#include <iostream>

using namespace std;

class Osoba {
private:
	string imie, nazwisko;
	friend class Pracownik;
	friend class Uczen;
public:
	void setName(string oImie) {
		imie = oImie;
	}
	void setSurname(string oNazwisko) {
		nazwisko = oNazwisko;
	}
};

class Pracownik {
private:
	string stanowisko;
public:
	void wypisz(Osoba osoba) {
		cout << osoba.imie << " " << osoba.nazwisko << " " << stanowisko << endl;
	}
	void setJob(string oStan) {
		stanowisko = oStan;
	}
};

class Uczen {
private:
	string klasa;
public:
	void wypisz(Osoba osoba) {
		cout << osoba.imie << " " << osoba.nazwisko << " " << klasa << endl;
	}
	void setClass(string oKlasa) {
		klasa = oKlasa;
	}
};

int main() {
	Osoba osoba;
	osoba.setName("Tadeusz");
	osoba.setSurname("Sikora");

	Pracownik pracownik;
	pracownik.setJob("nauczyciel");
	pracownik.wypisz(osoba);

	osoba.setName("Jerzy");
	osoba.setSurname("Pliszka");

	Uczen uczen;
	uczen.setClass("3E");
	uczen.wypisz(osoba);
}