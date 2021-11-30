#include <iostream>
using namespace std;

class Nauczyciel {
protected:
	string imie, nazwisko;
};

class Dyrektor : public Nauczyciel {
private:
	string szkola;
};

class Wychowawca : public Nauczyciel {
private:
	string klasa;
public:
	void setValues(string, string, string);
	string getImie();
	string getNazwisko();
	string getKlasa();
};

void Wychowawca::setValues(string _imie, string _nazwisko, string _klasa) {
	imie = _imie;
	nazwisko = _nazwisko;
	klasa = _klasa;
}

string Wychowawca::getImie() {
	return imie;
}

string Wychowawca::getNazwisko() {
	return nazwisko;
}

string Wychowawca::getKlasa() {
	return klasa;
}

class Sekretarka : public Nauczyciel {
};

int main() {
	string imie, nazwisko, klasa;
	Wychowawca wychowawca;

	cin >> imie;
	cin >> nazwisko;
	cin >> klasa;

	wychowawca.setValues(imie, nazwisko, klasa);
	imie = wychowawca.getImie();
	nazwisko = wychowawca.getNazwisko();
	klasa = wychowawca.getKlasa();

	cout << imie << " " << nazwisko << " " << klasa << endl;
}