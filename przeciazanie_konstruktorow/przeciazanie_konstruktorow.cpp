#include <iostream>

using namespace std;

struct Data {
	int dd, mm, rr;
};

class Pracownik {
public:
	int id;
	string imie, nazwisko;
	Data data_urodzenia;
	Pracownik();
	Pracownik(int, string, string);
	Pracownik(int, string, string, Data);
	void wyswietlDane();
};

// poniżej są trzy konstruktory o tej samej nazwie. nie wywala nam błędu, ponieważ program
// domyśla się, którego użyć podczas konstrukcji obiektu, wnioskując po otrzymanych danych

Pracownik::Pracownik() { // konstruktor domyślny
	id = -1;
	imie = "aaaa";
	nazwisko = "nnnn";
	data_urodzenia = { 1,1,1900 };
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko) { // konstruktor bez daty urodzenia
	id = pId;
	imie = pImie;
	nazwisko = pNazwisko;
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko, Data pDataUr) { // konstruktor z
	id = pId;
	imie = pImie;
	nazwisko = pNazwisko;
	data_urodzenia = pDataUr;
}

void Pracownik::wyswietlDane() {
	cout << id << " " << imie << " " << nazwisko << endl
		<< data_urodzenia.dd << "." << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
}

int main() {
	Pracownik pracownik1; // aktywuje domyślny
	pracownik1.wyswietlDane();

	Pracownik pracownik2(1, "jan", "kowalski"); // aktywuje drugi
	pracownik2.wyswietlDane();

	Pracownik pracownik3(2, "adam", "nowak", { 10,10,2000 }); // aktywuje ten z datą urodzenia
	pracownik3.wyswietlDane();

	/*jeśli nie ma konstruktorów, użyj tego:
		Pracownik pracownik1{ 1, "jan", "kowalski", { 10,12,2000 } };
	*/
}