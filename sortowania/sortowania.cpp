#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    int tab[5], n = 10;

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % n + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }

    
    cout << endl;
    cout << "wybierz sposób sortowania:\n" << "> wstawianie\n" << "> wybor\n";

    int h = n / 2;

    void sortowanie_wstaw(int tab, int n)
    {
        int i = 0;
        while (i < n) {
            for (int j = 1; j < n; j++) {
                if (tab[j] < tab[j - 1]) {
                    swap(tab[j], tab[j - 1]);
                }
            }
            i++;
        }
        for (int i = 0; i < n; i++) {
            cout << tab[i];
        }
    };

    void sortowanie_wybor(int tab, int n)
    {
        int i = 0, min = 0, p = 0;
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
        for (int i = 0; i < n; i++) {
            cout << tab[i];
        }
    }
}