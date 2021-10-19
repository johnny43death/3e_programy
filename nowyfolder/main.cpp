#include <iostream>
#include <vector>

using namespace std;

//sortowanie tablicy dwuwymiarowej
void sortowanie_przez_wstawianie(int tab[][2], int n) {
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--)
            if (tab[k][0] > tab[k - 1][0]) {
                swap(tab[k][0], tab[k - 1][0]);
                swap(tab[k][1], tab[k - 1][1]);
            } else break;
        j++;
    }
}

void insertion_sort(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        int elem = tab[i];
        int j = i - 1;
        while (j > 0 && tab[j] > elem) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = elem;
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }
}

void selection_sort(int *tab, int n) {
    for (int j = 0; j < n - 1; j++) {
        int min = j;
        for (int i = j + 1; i < n; i++) {
            if (tab[i] < tab[min]) {
                min = i;
            }
        }
        if (min != j) {
            swap(tab[j], tab[min]);
        }
    }
}

void shellSort(int *tab, int n) {
    for (int h = n / 2; h > 0; h /= 2) {
        for (int i = h; i < n; i += 1) {
            int tmp = tab[i];
            int j;
            for (j = i; j >= h && tab[j - h] > tmp; j -= h) {
                tab[j] = tab[j - h];
            }
            tab[j] = tmp;
        }
    }
}

void shellSortP(int *tab, int n) {
    for (int h = n / 2; h > 0; h /= 2) {
        for (int i = h; i < n; i += 1) {
            int tmp = *(tab + i);
            int j;
            for (j = i; j >= h && *(tab + j - h) > tmp; j -= h) {
                *(tab + j) = *(tab + j - h);
            }
            *(tab + j) = tmp;
        }
    }
}

void shellSort2() {
    int n = 8, tab[8], tabp[8 / 2], j, k;
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 10;
        cout << tab[i] << " ";
    }
    cout << endl;
    for (int h = n / 2; h > 1; h--) {
        for (int i = 0; i < h; i++) {
            j = i;
            k = 0;
            while (j < n) {
                tabp[k++] = tab[j];
                j += h;
            }
            insertion_sort(tabp, k);
            while (j >= 0) {
                tab[j - k] = tabp[--k];
                j -= h;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << tab[i] << endl;
}

void br() {
    cout << "\n=-=-=-=-=-=-=-=-=-=\n" << endl;
}

void logarray(int **arr) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void logVector(vector<int> vect, int n) {
    for (int i = 0; i < n; i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main() {

    //POINTERY

    int *pointer = new int(); // new int(INT VALUE) wtedy pointer = INT VALUE
    *pointer = 0;
    cout << "Value: " << *pointer << " Index: " << &pointer << endl;

    delete pointer;

    br();

    //TABLICE JEDNOWYMIAROWE POINTERY

    int *arr = new int[5]; // 5 = wielkosc tablicy

    for (int i = 0; i < 5; i++) arr[i] = i;
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    arr[2] = 10;

    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    br();

    //TABLICE WIELOWYMIAROWE POINTERY

    int **arr2 = new int *[5];

    for (int i = 0; i < 5; i++) {
        arr2[i] = new int[5]; //PAMIETAC O TYM / to tworzy tablice do każdego indexu tej glownej / bez tego bedzie jednowymiarowa
        for (int j = 0; j < 5; j++) arr2[i][j] = j;
    }

    logarray(arr2);

    delete[] arr2;

    br();

    //WEKTORY
    //pamietac o import <vector>
    vector<int> nazwa = {1, 2, 4}; //jak chcemy pusty wektor będzie vector<int> nazwa = {}

    nazwa.push_back(10); //wstawienie na koniec
    nazwa.insert(nazwa.begin(), 15); //wstawienie na poczatek
    logVector(nazwa, 5);

    nazwa.erase(nazwa.begin()); //USUWA 0 INDEX
    logVector(nazwa, 4);

    nazwa.erase(nazwa.begin(), nazwa.begin() + 2); // usuwa OD 0 DO 1 INDEXU
    logVector(nazwa, nazwa.size()); //ZAMIAST LICZBY JAKO N MOZE BYC nazwa.size() czyli dlugosc vektora

    br();
    //zwyklych wektorow nie da sie usunac mozemy zrobic np:
    nazwa.clear();

    //WEKTORY NA WSKAZNIKACH
    vector<int> *pvect = new vector<int>;
    pvect->push_back(10); //pamietac o strzalkach
    pvect->insert(pvect->begin(), 7);

    logVector(*pvect, 2);

    cout << "INDEX DLA " << (*pvect)[0] << " " << &pvect[0]<< endl; //WARTOSC Z WEKTORA WYSWIETLAMY pvect.at(INDEX); LUB (*pvect)[INDEX];
    cout << "INDEX DLA " << pvect->at(1) << " " << &pvect[1] << endl;

    delete pvect; //usuwanie wektora

    return 0;
}
