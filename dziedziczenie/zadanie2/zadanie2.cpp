#include <iostream>
using namespace std;

class Komputer
{
private:
	string marka, model;
};

class PC : public Komputer
{
private:
	string rodzajObudowy;
};

class Laptop : public Komputer
{
private:
	int DPE;
	string kolorObudowy;

public:
	void setValues(int, string);
	int getPrzekatna();
	string getKolor();
};

void Laptop::setValues(int lDPE, string lKolor) {
	DPE = lDPE;
	kolorObudowy = lKolor;
}

int Laptop::getPrzekatna() {
	return DPE;
}

string Laptop::getKolor() {
	return kolorObudowy;
}

int main() {
	int przekatna;
	string kolor;

	Laptop laptop;

	cin >> przekatna;
	cin >> kolor;

	laptop.setValues(przekatna, kolor);
	przekatna = laptop.getPrzekatna();
	kolor = laptop.getKolor();
	cout << przekatna << " " << kolor << endl;
}