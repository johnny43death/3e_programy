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

bool wejscieZero(int iDana) {
	if (iDana != 0) return true;
	else return false;
}

int main()
{
	try {
		string sX, sY;
		cin >> sX >> sY;
		if (wejscieFormat(sX) == false)
			throw sX;
		if (wejscieFormat(sY) == false)
			throw sY;
		int liczba1 = stoi(sX);
		int liczba2 = stoi(sY);
		if (wejscieZero(liczba2) == false)
			throw liczba2;
		int iloraz = liczba1 / liczba2;
		cout << liczba1 << " / " << liczba2 << " = " << iloraz;
	}

	catch (string) {
		cout << "UWAGA BLAD!" << endl
			<< "Format danej wejsciowej nie odpowiada liczbie calkowitej" << endl;
	}

	catch (int) {
		cout << "UWAGA BLAD!" << endl
			<< "Wartosc drugiej liczby nie pozwala na podzielenie (rowna sie 0)" << endl;
	}
}