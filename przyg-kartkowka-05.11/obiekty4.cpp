#include <iostream>

using namespace std;

class Przeliczenie_Dlugosci { 
public:
	float jard;
	float metr;
	Przeliczenie_Dlugosci();
	Przeliczenie_Dlugosci(float);
};

Przeliczenie_Dlugosci::Przeliczenie_Dlugosci() {
	jard = 0;
	metr = 0;
}

Przeliczenie_Dlugosci::Przeliczenie_Dlugosci(float p_jard) : Przeliczenie_Dlugosci::Przeliczenie_Dlugosci() {
	jard = p_jard;
	metr = jard * 0.9144;
	cout << "Jardy: " << jard << endl;
	cout << "Metry: " << metr << endl;
}

int main() {
	Przeliczenie_Dlugosci przeliczenie_dlugosci(5.0);
}