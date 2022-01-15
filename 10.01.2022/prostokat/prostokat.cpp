#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

struct Wyjatek {
	virtual string komunikat() = 0;
};

class Format : public Wyjatek {
	string sLiczba;
public:
	Format(string sLiczba) : sLiczba(sLiczba) {};
	string komunikat() {
		stringstream sTemp;
		sTemp << "UWAGA BLAD! Format danej wejsciowej " <<
			sLiczba << " nie odpowiada liczbie calkowitej" << endl;
		return sTemp.str();
	}
};

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++)
		if (isdigit(sDana[i] == false))
			if (char(sDana[i]) != char(",")) return false;
	return true;
}

int main()
{
	try {
		string sLiczba;
		cin >> sLiczba;

		if (wejscieFormat(sLiczba) == false)
			throw Format(sLiczba);

		int liczba = stof(sLiczba);

		float obwod = 4 * liczba;
		float pole = liczba * liczba;
		cout << "\nObwod: " << obwod;
		cout << "\nPole: " << pole;
	}

	catch (Wyjatek& wyjatek) {
		cout << wyjatek.komunikat() << endl;
	}
}