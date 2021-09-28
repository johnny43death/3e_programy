#include <iostream>
#include <ctime>
using namespace std;

void sortowanie_przez_wstawianie(int tab[], int n) {
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--)
            if (tab[k] > tab[k - 1]) swap(tab[k], tab[k - 1]);
            else break;
        j++;
    }
}

int main()
{
    srand(time(NULL));

    int n;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    int* tab = new int[n];
    int* tabp = new int[n / 2];
    int j, k;
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100;
        cout << tab[i] << " ";
    }

    cout << "\n";
    for (int h = n / 2; h > 1; h--) {
        for (int i = 0; i < h; i++) {
            j = i;
            k = 0;
            while (j < n) {
                tabp[k++] = tab[j];
            }
            sortowanie_przez_wstawianie(tabp, k);
            while (j >= 0) {
                tab[j - h] = tabp[--k];
                j -= h;
            }
        }
    }
    sortowanie_przez_wstawianie(tab, n);
    for (int i = 0; i < n; i++) cout << tab[i] << " ";
}