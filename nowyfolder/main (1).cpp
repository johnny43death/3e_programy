#include <iostream>
#include <vector>

using namespace std;

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

void logarray(int **arr) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(nullptr));
    //ZAD 1
    vector<int> v;
    /* test wektor na pointerze
     vector<int> *v2 = new vector<int>;

    v2->push_back(1);
    cout<<v2->at(0)<<endl;*/

    for (int i = 0; i < 100; i++) {
        int r = rand() % 100;
        if (r % 2 == 0) {
            v.push_back(r);
        } else {
            v.insert(v.begin(), r);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        if (i % 10 == 0)
            cout << endl;
    }

    //usuniecie wektora na wskazniku delete v2;

    cout << "\n=-=-=-=-=-=-=-=-=-=-==-=-=-=" << endl;
    //ZAD2

    int **arr = new int *[5];
    int *temp = new int[5];

    //Tu moze byc tez na zwyklych arrayach

    for (int i = 0; i < 5; i++) {
        arr[i] = new int[5];
        for (int j = 0; j < 5; j++) {
            int r = rand() % 10 + 1;
            arr[i][j] = r;
        }
    }

    int x = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 3) {
                temp[x++] = arr[i][j];
            }
        }
    }

    logarray(arr);

    cout << "\nTEMP: \n";
    for (int i = 0; i < 5; i++) cout << temp[i] << " ";
    cout << endl;

    selection_sort(temp, 5);

    cout << "\nTEMP: \n";
    for (int i = 0; i < 5; i++) cout << temp[i] << " ";
    cout << "\n res " << endl;

    x = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 3) {
                arr[i][j] = temp[x++];
            }
        }
    }

    logarray(arr);

    delete[] arr;
    delete[] temp;

    //ZAD3

    int *tab = new int[10];
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % 10;
        cout << tab[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        sum += tab[i];
    }
    avg = (float)sum / 10;

    cout << "\nSuma: " << sum << " Srednia: " << avg << endl;


    return 0;
}