#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int* tab = new int[n];
    int* max = new int;
    int* min = new int;
    *max = 0;
    *min = 100;

    for (int i = 0; i < n; i++) {
        *tab++ = rand() % 100 + 1;
    }
    tab -= n;
    for (int i = 0; i < n; i++) {
        cout << *tab++ << " ";
    }
    tab -= n;
    for (int i = 0; i < n; i++) {
        if (*max < *(tab + i)) {
            max = (tab + i);
        }
        if (*min > *(tab + i)) {
            min = (tab + i);
        }
    }
    tab -= n;
    cout << "\nMIN: " << *min << " : " << min << endl;
    cout << "MAX: " << *max << " : " << max << endl;
    delete[] tab;
}