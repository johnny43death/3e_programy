#include <iostream>
using namespace std;

class Samochod {
public:
	string marka, model, rokProdukcji;
	Samochod();
	Samochod(string, string, string);
};

Samochod::Samochod() {

}

Samochod::Samochod(string sMarka, string sModel, string sRokprodukcji) {
	marka = sMarka;
	model = sModel;
	rokProdukcji = sRokprodukcji;
}

class Ciezarowka : public Samochod {
public:
	string przeznaczenie;
	Ciezarowka();
	Ciezarowka(string);
};

Ciezarowka::Ciezarowka() {

}

Ciezarowka::Ciezarowka(string cPrzeznaczenie) {
	przeznaczenie = cPrzeznaczenie;
}

class Autobus : public Samochod {
public:
	int liczbaMStoj;
	int liczbaMSied;
	Autobus();
	Autobus(string, string, string, int, int);
};

Autobus::Autobus() {

}

Autobus::Autobus(string aMarka, string aModel, string aRokprodukcji, int aLiczbaMStoj, int aLiczbaMSied) : Samochod(aMarka, aModel, aRokprodukcji) {
	liczbaMStoj = aLiczbaMStoj;
	liczbaMSied = aLiczbaMSied;
}

int main() {
	string marka, model, rokProdukcji;
	int liczbamiejscstoj;
	int liczbamiejscsiedz;

	cin >> marka >> model >> rokProdukcji;
	cin >> liczbamiejscstoj >> liczbamiejscsiedz;

	Autobus autobus(marka, model, rokProdukcji, liczbamiejscstoj, liczbamiejscsiedz);

	cout << autobus.marka << " " << autobus.model << " " << autobus.rokProdukcji << " " << autobus.liczbaMStoj << " " << autobus.liczbaMSied << endl;
}