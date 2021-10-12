#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

//DD: w umiesc_k dać limit wykonania pętli

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
        do {
            cout << a << ": "; 
            cin >> x >> y >> z;
            if (x > 7 || x < 0) {
                cout << "niepoprawny zakres liczby x!\n";
            }
            if (y > 7 || y < 0) {
                cout << "niepoprawny zakres liczby y!\n";
            }
            if (z > 1 || z < 0) {
                cout << "niepoprawny zakres liczby z!\n";
            }
        } while ((x>7 || x<0) || (y>7 || y<0) || (z<0 || z>1));
        ok = sprawdz(x, y, z, plansza, a);
    }
    wstaw(x, y, z, plansza, statki, a);
}
void umiesc_k(int plansza[7][7], vector <int> statki[3], int a) {
    int x, y, z;
    bool ok = false;
    while (ok == false) {
        /*cout << "K" << a << endl;*/
        x = rand() % 5 + 1;
        y = rand() % 5 + 1;
        z = rand() % 2;
        /*cout << x << " " << y << " " << z << endl;*/
        ok = sprawdz(x, y, z, plansza, a);
    }
    wstaw(x, y, z, plansza, statki, a);
}
int strzal(int x, int y, int plansza[7][7], vector <int> statki[3]) {
    int s = 0, id;
    if ((plansza[x][y] > 0) && (plansza[x][y] < 4)) { //trafienie albo zatopienie
        if (plansza[x][y] > 1) {
            s = 1;
            for (int i = 1; i < statki[2].size(); i++) {
                if ((statki[0][i] == x) && (statki[1][i] == y)) {
                    id = statki[2][i];
                    statki[2][i] = 0;
                }
            }
            for (int i = 1; i < statki[2].size(); i++)
                if (statki[2][i] == id) plansza[statki[0][i]][statki[1][i]]--;
        }
        else s = 2;
    }
    plansza[x][y] = 5;
    return s;
}
void sortowanie_przez_wstawianie(int tab[][2], int n) {
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--)
            if (tab[k][0] > tab[k - 1][0]) {
                swap(tab[k][0], tab[k - 1][0]);
                swap(tab[k][1], tab[k - 1][1]);
            }
            else break;
        j++;
    }
}
int tablica_traf(int x, int y, int komp[][2], int traf[][2], int qq, int i) {
    if ((komp[i][0] == x) && (komp[i][1] == y)) {
        traf[qq][0] = x;
        traf[qq++][1] = y;
    }
    return qq;
}

int main()
{
    srand(time(NULL));
    const int n = 7;
    int x, y, s, zat = 0, zatk = 0, licznik = 0, los, t;
    int plansza1[n][n] = { 0 }, plansza2[n][n] = { 0 }, komp[25][2] = { 0 }, temp[3][2] = { 0 }, traf[4][2] = { 0 };
    string uplansza[n][n];
    vector <int> statki1[3], statki2[3];
    bool kto = true;

    //zerowanie tablic
    for (int i = 0; i < 3; i++) {
        statki1[i].push_back(0);
        statki2[i].push_back(0);
    }

    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            komp[licznik][0] = i;
            komp[licznik++][1] = j;
        }

    umiesc_k(plansza2, statki2, 3);
    umiesc_k(plansza2, statki2, 2);
    umiesc_k(plansza2, statki2, 1);
    umiesc_k(plansza2, statki2, 1);
    umiesc(plansza1, statki1, 3);
    umiesc(plansza1, statki1, 2);
    umiesc(plansza1, statki1, 1);
    umiesc(plansza1, statki1, 1);


    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++) {
            cout << plansza1[j][i] << " ";
            uplansza[j][i] = '.';
        }
    while ((zat < 4)&&(zatk < 4)) {
        int l = 0;
        bool ok = false;
        if (kto) {
            while (ok == false) {
                cout << "u: ";
                cin >> x >> y;
                if (plansza2[x][y] != 5) ok = true;
            }
            s = strzal(x, y, plansza2, statki2);
            if (s == 2) {
                cout << "zatopiony\n";
                uplansza[x][y] = "X";
                zat++;
                kto = true;
            }
            else if (s == 1) {
                cout << "trafiony\n";
                uplansza[x][y] = "X";
                kto = true;
            }
            else {
                cout << "pudlo\n";
                uplansza[x][y] = "O";
                kto = false;
            }

            for (int i = 1; i <= 5; i++, cout << endl)
                for (int j = 1; j <= 5; j++)
                    cout << uplansza[j][i] << " ";
        }
        else { // strzal komputera
            sortowanie_przez_wstawianie(traf, 4);
            /*for (int i = 0; i < 4; i++)
                cout << traf[i][0] << " " << traf[i][1] << endl;*/
            if (traf[0][0] != 0) {
                for (int i = 0; i < 4; i++)
                    if (traf[i][0] != 0) t = i + 1;
                t = rand() % t;
                x = traf[t][0];
                y = traf[t][1];
                for (int m = 0; m < licznik; m++)
                    if ((komp[m][0] == x) && (komp[m][1] == y)) {
                        komp[m][0] = 0;
                        komp[m][1] = 0;
                    }
                traf[t][0] = 0;
                traf[t][1] = 0;
            }
            else {
                los = rand()%licznik;
                x = komp[los][0];
                y = komp[los][1];
                komp[los][0] = 0;
                komp[los][1] = 0;
            }
            s = strzal(x, y, plansza1, statki1);
            cout << "k: " << x << " " << y << " ";
            if (s == 2) {
                zatk++;
                cout << "zatopiony\n";
                kto = false;
                for (int i = 0; i < 3; i++)
                    if (temp[i][0] == 0) {
                        t = i;
                        temp[i][0] = x;
                        temp[i][1] = y;
                    }
                for (int i = 0; i <= t; i++)
                    for (int j = temp[i][0] - 1; j <= temp[i][0] + 1; j++)
                        for (int k = temp[i][1] - 1; k <= temp[i][1] + 1; k++)
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == j) && (komp[m][1] == k)) {
                                    komp[m][0] = 0;
                                    komp[m][1] = 0;
                                    l++;
                                    break;
                                }
                for (int i = 0; i < 3; i++) {
                    temp[i][0] = 0;
                    temp[i][1] = 0;
                }
                for (int i = 0; i < 4; i++) {
                    traf[i][0] = 0;
                    traf[i][1] = 0;
                }
            }
            else if (s == 1) {
                int q = 0;
                cout << "trafiony\n";
                kto = false;
                for (int i = 0; i < 3; i++)
                    if (temp[i][0] == 0) {
                        t = i;
                        temp[i][0] = x;
                        temp[i][1] = y;
                        break;
                    }
                if (t == 0) {
                    for (int i = 0; i < licznik; i++) {
                        q = tablica_traf(x - 1, y, komp, traf, q, i);
                        q = tablica_traf(x, y - 1, komp, traf, q, i);
                        q = tablica_traf(x + 1, y, komp, traf, q, i);
                        q = tablica_traf(x, y + 1, komp, traf, q, i);

                    }
                }
                else {
                    for (int i = 0; i < 4; i++) {
                        traf[i][0] = 0;
                        traf[i][1] = 0;
                    }
                    q = 0;
                    if (temp[0][0] != temp[1][0]) { //poziomo
                        if (temp[0][0] < temp[1][0]) {
                            for (int i = 0; i < licznik; i++) {
                                q = tablica_traf(temp[0][0] - 1, temp[0][1], komp, traf, q, i);
                                q = tablica_traf(temp[1][0] + 1, temp[0][1], komp, traf, q, i);
                            }
                        }
                        else {
                            for (int i = 0; i < licznik; i++) {
                                q = tablica_traf(temp[0][0] + 1, temp[0][1], komp, traf, q, i);
                                q = tablica_traf(temp[1][0] - 1, temp[0][1], komp, traf, q, i);
                            }
                        }
                    }
                    else { //pionowo
                        if (temp[0][1] < temp[1][1]) {
                            for (int i = 0; i < licznik; i++) {
                                q = tablica_traf(temp[0][0], temp[0][1] - 1, komp, traf, q, i);
                                q = tablica_traf(temp[1][0], temp[0][1] + 1, komp, traf, q, i);
                            }
                        }
                        else {
                            for (int i = 0; i < licznik; i++) {
                                q = tablica_traf(temp[0][0], temp[0][1] + 1, komp, traf, q, i);
                                q = tablica_traf(temp[1][0], temp[0][1] - 1, komp, traf, q, i);
                            }
                        }
                    }
                }
            }
            else {
                cout << "pudlo\n";
                kto = true;
            }
            if (l > 0) licznik -= (l+1);
            else licznik--;
            sortowanie_przez_wstawianie(komp, 25);
            /*for (int i = 0; i < 25; i++, cout << endl)
                cout << komp[i][0] << " " << komp[i][1];
            cout << licznik;*/
        }
        /*cout << "-------------------------------------" << endl;
        for (int i = 0; i < n; i++, cout << endl)
            for (int j = 0; j < n; j++)
                cout << plansza1[j][i] << " ";
        cout << "-------------------------------------" << endl;
        for (int i = 1; i <= n; i++)
            cout << statki1[0][i] << " " << statki1[1][i] << " " << statki1[2][i] << endl;*/
    }
    if (zat == 4) cout << "wygral uzytkownik";
    else cout << "wygral komputer";
}