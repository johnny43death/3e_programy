#include <iostream>
#include <vector>
#include <string>
#include <ctime>
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

void umiesc_k(int plansza[7][7], vector <int> statki[3], int a) {
    int x, y, z, id;
    bool ok = false;
    while (ok == false) {
        //cout << "K" << a << ": ";
        x = rand() % 5 + 1;
        y = rand() % 5 + 1;
        z = rand() % 2;
        //cout << x << " " << y << " " << z << endl;
        ok = sprawdz(x, y, z, plansza, a);
    }
    wstaw(x, y, z, plansza, statki, a);
}

int strzal(int x, int y, int plansza[7][7], vector <int> statki[3]) {
    int s = 0, id;
    if ((plansza[x][y] > 0) && (plansza[x][y] < 4)) { //trafienie albo zatopienie
        if (plansza[x][y] > 1) {
            for (int i = 1; i < statki[2].size(); i++) {
                if ((statki[0][i] == x) && (statki[1][i] == y)) {
                    id = statki[2][i];
                    statki[2][i] = 0;
                }
            }
            for (int i = 1; i < statki[2].size(); i++)
                if (statki[2][i] == id) plansza[statki[0][i]][statki[1][i]];
        }
        else s = 2;
        plansza[x][y] = 0;
    }
    return s;
}

void sortowanie(int tab[][2], int n)
{
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--) {
            if (tab[k][0] > tab[k - 1][0]) {
                swap(tab[k][0], tab[k - 1][0]);
                swap(tab[k][1], tab[k - 1][1]);
            }
            else break;
        }
        j++;
    }
};

void tablica_traf(int t, int traf[4][2], int komp[25][2], int x, int y, int licznik, int l)
{
    for (int m = 0; m < licznik; m++)
        if ((komp[m][0] == x) && (komp[m][1] == y - 1)) {
            traf[t][0] = x;
            traf[t++][1] = y - 1;
            l++;
            break;
        }
}

int main()
{
    srand(time(NULL));
    const int n = 7;
    int x, y, s, zat = 0, licznik = 0, los, t;
    bool kto = true;
    int plansza1[n][n] = { 0 }, plansza2[n][n] = { 0 }, komp[25][2] = { 0 }, temp[3][2] = { 0 }, traf[4][2] = { 0 };
    string uplansza[n][n];
    vector <int> statki1[3], statki2[3];

    //zerowanie tablic
    for (int i = 0; i < 3; i++) {
        statki1[i].push_back(0);
        statki2[i].push_back(0);
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            komp[licznik][0] = i;
            komp[licznik++][1] = j;
        }
    }

    umiesc_k(plansza2, statki2, 3);
    umiesc_k(plansza2, statki2, 2);
    umiesc_k(plansza2, statki2, 1);
    umiesc_k(plansza2, statki2, 1 );

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
        int l = 0;
        if (kto) {
            cout << "u: ";
            cin >> x >> y;
            s = strzal(x, y, plansza2, statki2);
            if (s == 2) {
                cout << "Trafiony zatopiony\n";
                uplansza[x][y] = "X";
                zat++;
                kto = true;
            }
            else if (s == 1) {
                cout << "Trafiony\n";
                uplansza[x][y] = "X";
                kto = true;
            }
            else {
                cout << "Pudlo\n";
                uplansza[x][y] = "O";
                kto = false;
            }

            for (int i = 1; i <= 5; i++, cout << endl)
                for (int j = 1; j <= 5; j++)
                    cout << uplansza[j][i] << " ";
        }
        else { //strzał komputera
            if (traf[0][0] != 0) {
                for (int i = 0; i < 3; i++)
                    if (temp[i][0] == 0) t = i;
                t = rand() % t;
                x = traf[t][0];
                y = traf[t][1];
                traf[t][0] = 0;
                traf[t][1] = 0;
                sortowanie(traf, 4);
                for (int i = 0; i < 3; i++) {
                    cout << traf[i][0] << " " << traf[i][1] << endl;
                }
                cout << "---------------------------------" << endl;
            }
            else {
                los = rand() % licznik;
                x = komp[los][0];
                y = komp[los][1];
                komp[los][0] = 0;
                komp[los][1] = 0;
            }
            s = strzal(x, y, plansza1, statki1);
            cout << "K: " << x << " " << y << " ";
            if (s == 2) {
                cout << "Trafiony zatopiony\n";
                kto = false;
                for (int i = 0; i < 3; i++) 
                    if (temp[i][0] == 0) {
                        t = i;
                        temp[i][0] = x;
                        temp[i][1] = y;
                    }
                for (int i = 0; i <= t; i++) {
                    for (int j = temp[i][0] - 1; j <= temp[i][0] + 1; j++) {
                        for (int k = temp[i][1] - 1; k <= temp[i][1] + 1; k++) {
                            for (int m = 0; m < licznik; m++) {
                                if ((komp[m][0] = j) && (komp[m][1] == k)) {
                                    komp[m][0] = 0;
                                    komp[m][1] = 0;
                                    l++;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (int i = 0; i < 3; i++) {
                    temp[i][0] = 0;
                    temp[i][1] = 0;
                }
            }
            else if (s == 1) {
                cout << "Trafiony\n";
                kto = false;
                for (int i = 0; i < 3; i++)
                    if (temp[i][0] == 0) {
                        t = i;
                        temp[i][0] = x;
                        temp[i][1] = y;
                    }
                if (t == 0) {
                    tablica_traf(t, traf, komp, x, y - 1, licznik, l);
                    tablica_traf(t, traf, komp, x + 1, y, licznik, l);
                    tablica_traf(t, traf, komp, x, y + 1, licznik, l);
                    tablica_traf(t, traf, komp, x - 1, y, licznik, l);
                }
                
            }
            else {
                cout << "Pudlo\n";
                kto = true;
            }
            if (l > 0) licznik -= 1;
            else licznik--;
            sortowanie(komp, 25);
            for (int i = 0; i < 25; i++, cout << endl)
                cout << komp[i][0] << " " << komp[i][1];
            cout << licznik;
        }
        for (int i = 1; i <= 5; i++, cout << endl)
            for (int j = 1; j <= 5; j++)
                cout << uplansza[j][i] << " ";
    }
}