#include <iostream>
#include <vector>

using namespace std;

bool sprawdz(int x, int y, int z, int plansza[7][7], int a) {
	bool ok = true;
	if (z == 0) { //z to orientacja, 0 to orientacja pozioma
		if (x > a) ok = false;
		else {
			for (int i = x; i < x + a; i++)
				if (plansza[i][y] != 0) ok = false;
		}
	}
	else {
		if (y > a) ok = false;
		else
			for (int i = y; i < y + a; i++)
				if (plansza[x][i] != 0) ok = false;
	}
	return ok;
}

int main() {
	const int n = 7;
	int x, y, z;
	int plansza1[n][n] = { 0 };
	vector <int> statki1[3];

	//zmienna określająca czy można wstawić statek w tym miejscu
	bool ok = false;

	//zerowanie tablic
	for (int i = 0; i < 3; i++) statki1[i].push_back(0);

	while (ok == false) {
		cin >> x >> y >> z;
		ok = sprawdz(x, y, z, plansza1, 3);
	}

	if (z == 0) {
		for (int i = x; i < x + 3; i++) {
			for (int k = x - 1; k <= x + 1; k++)
				for (int l = y - 1; l <= y + 1; l++)
					plansza1[k][l] = 9;
		}
	}
}