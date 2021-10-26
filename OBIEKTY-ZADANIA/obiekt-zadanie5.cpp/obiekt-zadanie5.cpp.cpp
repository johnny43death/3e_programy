#include <iostream>
#include <string>

using namespace std;

struct Data { // ZADANIE 5
	int dd, mm, rr;
};

class Samochod {
private:
	string marka;
	string model;
	string rok_produkcji;
	double cena;
	string numer_rejestracyjny;
	Data data_pierwszej_rejestracji;

public:
	~Samochod();
	Samochod();
	Samochod(string, string, string, double, string, Data);
	void wyswietlDane();
};

Samochod::~Samochod() {

}

Samochod::Samochod() {

}

Samochod::Samochod(string Pmarka, string Pmodel, string Prok_produkcji, double Pcena, string Pnumer_rejestracyjny, Data Pdata_pierwszej_rejestracji) : marka(Pmarka), model(Pmodel), rok_produkcji(Prok_produkcji), cena(Pcena), numer_rejestracyjny(Pnumer_rejestracyjny), data_pierwszej_rejestracji(Pdata_pierwszej_rejestracji){

}

void Samochod::wyswietlDane() {
	cout << marka << " " << model << " " << rok_produkcji << " " << cena << " " << numer_rejestracyjny << " " << data_pierwszej_rejestracji.dd << "." << data_pierwszej_rejestracji.mm << "." << data_pierwszej_rejestracji.rr << endl;
}

int main() {
	string marka, model, rok_produkcji;
	double cena;
	string numer_rejestracyjny;
	Data data_pierwszej_rejestracji;

	cout << "Marka samochodu: "; cin >> marka;
	cout << "Model: "; cin >> model;
	cout << "Rok produkcji samochodu: "; cin >> rok_produkcji;
	cout << "Cena samochodu: "; cin >> cena;
	cout << "Numer rejestracyjny samochodu: "; cin >> numer_rejestracyjny;
	cout << "Data pierwszej rejestracji (dzien, miesiac, rok): "; 
	cin >> data_pierwszej_rejestracji.dd >> data_pierwszej_rejestracji.mm >> data_pierwszej_rejestracji.rr;

	Samochod samochod(marka, model, rok_produkcji, cena, numer_rejestracyjny, data_pierwszej_rejestracji);
	samochod.wyswietlDane();
}