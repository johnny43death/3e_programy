/*
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <sstream>

// [     1: KLASY I OBIEKTY     ]
struct Data {
	int dd, mm, rr;
};
class Pracownik {
public:
	int id;
	string imie, nazwisko;
	Data data_urodzenia;
	Pracownik();
	Pracownik(int, string, string, Data);
};

// [     1A: KLASY I OBIEKTY INDEKSOWO     ]
Pracownik* w_pracownik = new Pracownik();
Pracownik* w_pracownik = &pracownik;
Pracownik* pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);
w_pracownik->imie = "jan";
w_pracownik->nazwisko = "kowalski";
delete w_pracownik1;

// [     1B: KONSTRUKTORY     ]
Pracownik::Pracownik() { // konstruktor domyślny
	id = -1;
	imie = "aaaa";
	nazwisko = "nnnn";
	data_urodzenia = { 1,1,1900 };
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko) { // konstruktor parametryczny
	id = pId;
	imie = pImie;
	nazwisko = pNazwisko;
}

Prostokat::Prostokat(const Prostokat& wzorzec) { //definicja konstruktora kopiującego 
	// bok 1 i 2 przepisujemy sobie ze wzorca, który zdefiniowaliśmy
	bok1 = wzorzec.bok1;
	bok2 = wzorzec.bok2;
}
void Prostokat::pobierzBoki(double& pBok1, double& pBok2) { // odwrotna funkcja 
	//do wydostawania zmiennych prywatnych z projektu
	pBok1 = bok1;
	pBok2 = bok2;
}
void Prostokat::ustawBoki(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
}
Prostokat kopiujProstokat(Prostokat prostokat) { //wrzucamy obiekt i zwracamy kopię
	return prostokat;
}

Prostokat p4;
p4 = kopiujProstokat(p1); // najpierw tworzymy, potem kopiujemy właściwości
p4.pobierzBoki(b1, b2);
cout << b1 << " " << b2 << endl;
p4.ustawBoki(11, 13);
p4.pobierzBoki(b1, b2);
cout << b1 << " " << b2 << endl;

// [     1C: DESTRUKTORY     ]
~Prostokat() {
	cout << "--------DESTRUKTOR--------" << endl;
};

// [     2: HERMETYZACJA I DZIEDZICZENIE     ]
class Prostokat {
public:
	int a, b;
	Prostokat();
	int pole();
	int obwod();
};
class Prostopadloscian : public Prostokat {
public:
	int h;
	Prostopadloscian();
	int objetosc();
	int ppc();
	void wypisz();
};
class Prostopadloscian : private Prostokat 
 ^ prywatyzacja metod i zmiennych klasy bazowej

Pracownik* w_pracownik;

Pracownik ;
w_pracownik = &p1;
w_pracownik->imie = "jan";
w_pracownik->nazwisko = "kowalski";
w_pracownik->zwrocDane();

Nauczyciel p2;
w_pracownik = &p2;
w_pracownik->imie = "adam";
w_pracownik->nazwisko = "nowak";
//wskaźnik ma tylko miejsce na imię i nazwisko, ponieważ jest typu Pracownik
p2.przedmiot = "matematyka";
p2.zwrocDane();

// [     3: POLIMORFIZM     ]
class A {
	string a = "klasaA";
public:
	A();
	A(string); //polimorfizm statyczny, przeciążanie klas, tworzenie wiązań przed uruchomieniem programu
	// kiedy dziedziczone metody mają takie same nazwy, klasa wybiera tą, która jest zdefiniowana w niej samej
	void wypisz() {cout << a << endl;}
	string getA() { return a; }
};

class Pracownik {
//	polimorfizm dynamiczny, przeciążanie klas, tworzenie wiązań wraz z działaniem programu, ergo na bieżąco
//  (na przykład )
public:
	string imie, nazwisko;
	//	metoda wirtualna metoda pozwala będzie się zmieniać w zależności od tego, w której klasie się znajdujemy
	//	takie podejście pozwala na korzystanie ze wskaźników, zamiast zwykłego "p2.imie = "
	virtual void zwrocDane(){
		cośtam cośtam
	};
};

p2.zwrocDane();
w_pracownik->zwrocDane(); // takie komendy działają do aktywacji metod wirtualnych

// [     4: MECHANIZM ABSTRAKCJI     ]
class Info {
public: 
    virtual void wyswietlDane() = 0; // metoda czysto wirtualna
};

class Pracownik : public Osoba, public Info {
public:
    void wyswietlDane() { // tutaj piszemy bez "virtual" by określić co robi metoda w poszczególnych klasach
        cout << imie << " " << nazwisko << " " << endl;
    }
};
class Uczen : public Osoba, public Info {
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << endl;
    }
};

// [     5: FUNKCJE I KLASY ZAPRZYJAŹNIONE     ]
class Promien; // tutaj możesz napotkać na problem! zdefiniuj klasę przed jej definicją
class Kolo {
public:
    double pole(Promien pPromien);
    double obwod(Promien pPromien);
};
class Promien {
private:
    double _r;
public:
    void setRadius(double r) {
        _r = r;
    }
    double getRadius(double r) {
        return _r;
    }
    // funkcja zaprzyjaźniona. definicja metody z innej klasy
    friend double Kolo::pole(Promien);
    friend double Kolo::obwod(Promien);
};
double Kolo::pole(Promien pPromien) {
    return 3.14 * pPromien._r * pPromien._r;
}
double Kolo::obwod(Promien pPromien) {
    return 2 * 3.14 * pPromien._r;
}
int main()
{
    Promien promien;
    promien.setRadius(1);
    Kolo kolo;
    //gdyby nie było przyjaciół (friend), użyli byśmy getterów:
    // cout << getRadius(promien);
    cout << kolo.pole(promien) << endl;
    cout << kolo.obwod(promien) << endl;
    //podobnie jak w prawdziwym życiu przyjaźń NIE PODLEGA DZIEDZICZENIU
    //podobnie jak w prawdziwym życiu przyjaźń musi być odwzajemniona
}

class Promien {
    double _r;
public:
    void setRadius(double);
    double getRadius();

    // klasy zaprzyjaźnione
    friend class Kolo;
};
void Promien::setRadius(double r) {
    _r = r;
}
double Promien::getRadius() {
    return _r;
}
class Kolo {
public:
    double pole(Promien);
    double obwod(Promien);
};
double Kolo::pole(Promien promien) {
    return 3.14 * promien._r * promien._r;
}
double Kolo::obwod(Promien promien) {
    return 2 * 3.14 * promien._r;
}
int main() {
    Promien promien;
    Kolo kolo;

    promien.setRadius(1);
    cout << kolo.pole(promien) << endl;
    cout << kolo.obwod(promien) << endl;
}

// [     6: SZABLONY FUNKCJI I KLAS     ]
template <typename zmienna> // przy czym możesz potem wywołać używając dowolnego typu danych, zmienna zaadaptuje ten typ
zmienna poleProstokata( zmienna a, zmienna b ) {
    return a * b;
}
cout << poleProstokata<int>(a1, b1) << endl;
cout << poleProstokata<float>(a2, b2) << endl;

template <typename zmienna>
zmienna poleKola( zmienna r ) {
    return 3,14 * r * r;
}
template <>
float poleKola( float r ) {
    return 3,14 * r * r;
}
cout << poleKola(r1) << endl;
cout << poleKola(r2) << endl;

template <class T>
class Kolo{
public:
    T r;
    T poleKola() {
        return 3,14 * r * r;
    }
    T obwodKola() {
        return 2 * 3,14 * r;
    }
};

// [     7: OBSŁUGA BŁĘDÓW I WYJĄTKÓW     ]
bool wejscieFormat(string sDana) { // format
	for (int i = 0; i < sDana.length(); i++)
		if (isdigit(sDana[i]) == false)
			return false;
	return true;
}
bool wejscieZakres(int iDana) { // zakres
	if ((iDana >= 1) && (iDana <= 6)) return true;
	else return false;
}

try {
	string sOcena = "5+";
	string s1 = "blad";
	if (wejscieFormat(sOcena) == false)
		throw sOcena;
	int ocena = stoi(sOcena);
	if (wejscieZakres(ocena) == false)
			throw ocena;
	if (ocena == 1) cout << "uczen nie otrzymuje promocji";
	else cout << "uczen otrzymuje promocje";
}
catch (string sOcena) {
	cout << "UWAGA BLAD!" << endl << sOcena << endl
		<< "Format danej wejsciowej nie odpowiada liczbie calkowitej" << endl;
}
catch (int) {
	cout << "UWAGA BLAD!" << endl
		<< "Wartosc danej wejsciowej nie miesci sie w zakresie <1,6>" << endl;
}

// [     7A: WYJĄTKI OBIEKTOWO     ]
struct Wyjatek {
	virtual string komunikat() = 0;
};

class Format : public Wyjatek {
	string sOcena;
public:
	Format(string sOcena) : sOcena(sOcena) {};
	string komunikat() {
		stringstream sTemp;
		sTemp << "UWAGA BLAD! Format danej wejsciowej " <<
			sOcena << " nie odpowiada liczbie calkowitej" << endl;
		return sTemp.str();
	}
};

class Zakres : public Wyjatek {
	int ocena;
public:
	Zakres(int ocena) : ocena(ocena) {}; //przypisanie wartości
	string komunikat() {
		stringstream sTemp;
		sTemp << "UWAGA BLAD! Wartosc danej wejsciowej " <<
			ocena << " nie miesci sie w zakresie <1,6>" << endl;
		return sTemp.str();
	}
};

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++)
		if (isdigit(sDana[i] == false))
			return false;
	return true;
}

bool wejscieZakres(int iDana) {
	if ((iDana >= 1) && (iDana <= 6)) return true;
	else return false;
}

int main()
{
	try {
		string sOcena;
		cin >> sOcena;
        
		if (wejscieFormat(sOcena) == false)
			throw Format(sOcena);
		int ocena = stoi(sOcena);

		if (wejscieZakres(ocena) == false)
			throw Zakres(ocena);
		if (ocena == 1) cout << "uczen nie otrzymuje promocji"<<endl;
		else cout << "uczen otrzymuje promocje" << endl;
	}

	catch (Wyjatek& wyjatek) {
		cout << wyjatek.komunikat() << endl;
	}
}
*/