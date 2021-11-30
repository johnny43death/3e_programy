#include <iostream>
using namespace std;

class Nauczyciel {
public:
	string imie, nazwisko;
};

class Dyrektor : public Nauczyciel {
public:
	string szkola;
};

class Wychowawca : public Nauczyciel {
public:
	string klasa;
};

class Sekretarka : public Nauczyciel {

};

int main() {
	Wychowawca wychowawca;
	cin >> wychowawca.imie;
	cin >> wychowawca.nazwisko;
	cin >> wychowawca.klasa;
	cout << wychowawca.imie << " " << wychowawca.nazwisko << " " << wychowawca.klasa;
}