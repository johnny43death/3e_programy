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
    string sOcena;
public:
    Format(string sOcena) : sOcena(sOcena) {};
    string komunikat() {
        stringstream sTemp;
        sTemp << "UWAGA BLAD! Format danej wejsciowej '" << sOcena << "' nie odpowiada liczbie calkowitej" << endl;
        return sTemp.str();
    }
};

class Zakres : public Wyjatek {
    int ocena;
public:
    Zakres(int ocena) : ocena(ocena) {};
    string komunikat() {
        stringstream sTemp;
        sTemp << "UWAGA BLAD! Wartosc danej wejsciowej '" << ocena << "' nie miesci sie w zakresie <1,6>" << endl;
        return sTemp.str();
    }
};

bool wejscieFormat(string sDana) {
    for (int i=0; i<sDana.length(); i++)
        if (isdigit(sDana[i] == false))
            return false;
    return true;
}

bool wejscieZakres(int iDana) {
    if ((iDana >= 1) && (iDana <= 6)) return true;
	else return false;
}

int main() {
    try {
        string sOcena;
        cin >> sOcena;

        if (wejscieFormat(sOcena)==false)
            throw Format(sOcena);

        int ocena = stoi(sOcena);

        if (wejscieZakres(ocena)==false)
            throw Zakres(ocena);

        if (ocena == 1) cout << "uczen nie otrzymuje promocji"<<endl;
		else cout << "uczen otrzymuje promocje" << endl;
    }

    catch (Wyjatek& wyjatek) {
		cout << wyjatek.komunikat() << endl;
	}
}