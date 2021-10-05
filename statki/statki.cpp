#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool sprawdz(int x, int y, int z, int plansza[7][7], int a) {
    bool ok = true;
    if (z == 0) { //poziomo
        if (x > 6 - a) ok = false;
        else
            for (int i = x; i < x + a; i++)
                if (plansza[i][y] != 0) ok = false;
    }
    else {
        if (y > 6 - a) ok = false;
        else
            for (int i = y; i < y + a; i++)
                if (plansza[x][i] != 0) ok = false;
    }
    return ok;
}

void wstaw(int x, int y, int z, int plansza[7][7], vector <int> statki[3], int a) {
    int id;
    id = statki[2].size() - 1;
    id++;
    if (z == 0) {
        for (int i = x; i < x + a; i++)
            for (int k = i - 1; k <= i + 1; k++)
                for (int l = y - 1; l <= y + 1; l++)
                    plansza[k][l] = 9;
        for (int i = x; i < x + a; i++) {
            statki[0].push_back(i);
            statki[1].push_back(y);
            statki[2].push_back(id);
            plansza[i][y] = a;
        }
    }
    else {
        for (int i = y; i < y + a; i++)
            for (int k = i - 1; k <= i + 1; k++)
                for (int l = x - 1; l <= x + 1; l++)
                    plansza[l][k] = 9;
        for (int i = y; i < y + a; i++) {
            statki[0].push_back(x);
            statki[1].push_back(i);
            statki[2].push_back(id);
            plansza[x][i] = a;
        }
    }
}
void umiesc(int plansza[7][7], vector <int> statki[3], int a) {
    int x, y, z;
    bool ok = false;
    while (ok == false) {
        cout << a << ": ";
        cin >> x >> y >> z;
        ok = sprawdz(x, y, z, plansza, a);
    }
    wstaw(x, y, z, plansza, statki, a);
}

int strzal(int x, int y, int plansza[7][7], vector <int> statki[3]) {
    int s = 0, id;
    if ((plansza[x][y] > 0) && (plansza[x][y] < 4)) { //trafienie albo zatopienie
        if (plansza[x][y] > 1) {
            for (int i = 1; i < statki[2].size(); i++) {
                if ((statki[0][i] == x) && (statki[1][i] == y)) id = statki[2][i];
                statki[2][i] = 0;
            }
            for (int i = 1; i < statki[2].size(); i++)
                if (statki[2][i] == id) plansza[statki[0][i]][statki[1][i]];
        }
        else s = 2;
        plansza[x][y] = 0;
    }
    return s;
}

int main()
{
    const int n = 7;
    int x, y, s, zat=0;
    int plansza1[n][n] = { 0 };
    string uplansza[n][n];
    vector <int> statki1[3];

    //zerowanie tablic
    for (int i = 0; i < 3; i++) statki1[i].push_back(0);

    umiesc(plansza1, statki1, 3);
    umiesc(plansza1, statki1, 2);
    umiesc(plansza1, statki1, 1);
    umiesc(plansza1, statki1, 1);

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++) {
            cout << plansza1[j][i] << " | ";
            uplansza[j][i] = ".";
        }

    while (zat < 4) {
        cout << "u: ";
        cin >> x >> y;
        s = strzal(x, y, plansza1, statki1);
        if (s == 2) {
            cout << "zatopiony\n";
            uplansza[x][y] = "X";
            zat++;
        }
        else if (s == 1) {
            cout << "trafiony\n";
            uplansza[x][y] = "X";
        }
        else {
            cout << "pudlo\n";
            uplansza[x][y] = "O";
        }

        for (int i = 1; i <= 5; i++, cout << endl)
            for (int j = 1; j <= 5; j++)
                cout << uplansza[j][i] << " ";
    }
}