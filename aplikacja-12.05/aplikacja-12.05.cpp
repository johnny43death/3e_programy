#include <iostream>

using namespace std;

void sortowanie_wybor(int tab, int n)
{
    int i = 0, min = 0, p = 0;
    while (i != n - 1) {
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

int main()
{
    int tab[10] = { 9, 5, 8, 3, 2, 1, 6, 4, 7, 0 };

}
