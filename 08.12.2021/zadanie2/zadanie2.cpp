#include <iostream>
#include <ctime>

using namespace std;

class Osoba {
public: 
	string imie, nazwisko;
	virtual void wyswietl() {
		
	}
};

class Lekarz : public Osoba {
private:
	string specjalizacja;
public:
	void set(string pImie, string pNazwisko, string pSpec) {
		imie = pImie;
		nazwisko = pNazwisko;
		specjalizacja = pSpec;
	}
};

class Ordynator : protected Lekarz {
private:
	string oddzial;
public:
	void set(string pImie, string pNazwisko, string pSpec, string pOddzial) {
		imie = pImie;
		nazwisko = pNazwisko;
		specjalizacja = pSpec;
		oddzial = pOddzial;
	}

};

int main() {
	Lekarz* w_lekarz = new Lekarz;
	w_lekarz->set("Arkadiusz", "Swidrygajlow", "kardiochirurgia");
	w_lekarz->wyswietl();

	Ordynator* w_ordynator = new Ordynator;
	w_ordynator->set("Maria", "Cichowska", "Psychologia", "Oddzial psychologii dzieciecej");
	w_ordynator->wyswietl();
}