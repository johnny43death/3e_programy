#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    int tab[5], i = 0, n = 5, min, p;
    srand(time(NULL));

    for (int x = 0; x < n; x++) {
        tab[x] = rand() % n;
        cout << tab[x] << " ";
    }

    cout << endl;

    while (i != n - 1) {
        cout << "*";
        min = n;
        for (int j = i; j < n; j++) {
            if (tab[j] < min) {
                min = tab[j];
                p = j;
            }
        }
        swap(tab[i], tab[p]);
        i++;
    }

    cout << endl;

    for (int x = 0; x < n; x++) {
        cout << tab[x] << " ";
    }
}