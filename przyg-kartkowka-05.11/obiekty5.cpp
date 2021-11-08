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
	Data data_pr;

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

Samochod::Samochod(string Pmarka, string Pmodel, string Prok_produkcji, double Pcena, string Pnumer_rejestracyjny, Data Pdata_pr) : marka(Pmarka), model(Pmodel), rok_produkcji(Prok_produkcji), cena(Pcena), numer_rejestracyjny(Pnumer_rejestracyjny), data_pr(Pdata_pr){
// konstruktor parametryczny odwołuje się do domyślnego, ponieważ zmienne są prywatne
}

void Samochod::wyswietlDane() {
	cout << marka << " " << model << " " << rok_produkcji << " " << cena << " " << numer_rejestracyjny << " " << data_pr.dd << "." << data_pr.mm << "." << data_pr.rr << endl;
}

int main() {
    //jeśli zmienne są prywatne, trzeba je ponownie zdefiniować w funkcji głównej
	string marka, model, rok_produkcji;
	double cena;
	string numer_rejestracyjny;
	Data data_pr;

	cout << "Marka samochodu: "; cin >> marka;
	cout << "Model: "; cin >> model;
	cout << "Rok produkcji samochodu: "; cin >> rok_produkcji;
	cout << "Cena samochodu: "; cin >> cena;
	cout << "Numer rejestracyjny samochodu: "; cin >> numer_rejestracyjny;
	cout << "Data pierwszej rejestracji (dzien, miesiac, rok): "; 
	cin >> data_pr.dd >> data_pr.mm >> data_pr.rr;

	Samochod samochod(marka, model, rok_produkcji, cena, numer_rejestracyjny, data_pr);
	samochod.wyswietlDane();
}