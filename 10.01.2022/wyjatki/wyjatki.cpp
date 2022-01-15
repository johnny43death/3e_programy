#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++)
		if (isdigit(sDana[i]) == false)
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
}