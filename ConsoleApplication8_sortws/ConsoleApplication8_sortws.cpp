#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    int tab[5], i = 0, n = 10;
    srand(time(NULL));

    for (int x = 0; x < n; x++) {
        tab[x] = rand() % n;
        cout << tab[x] << " ";
    }

    cout << endl;

    while (i < n) {
        for (int j = 1; j < n; j++) {
            if (tab[j] < tab[j - 1]) {
                swap(tab[j], tab[j - 1]);
            }
        }
        i++;
    }

    for (int x = 0; x < n; x++) {
        cout << tab[x] << " ";
    }
}