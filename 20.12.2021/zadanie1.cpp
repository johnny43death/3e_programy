#include <iostream>
using namespace std;

template <typename zmienna>
zmienna poleProstokata( zmienna a, zmienna b ) {
    return a * b;
}

template <typename zmienna>
zmienna poleKola( zmienna r ) {
    return 3,14 * r * r;
}

template <typename zmienna>
zmienna obwodProstokata( zmienna a, zmienna b ) {
    return 2 * a + 2 * b;
}

template <typename zmienna>
zmienna obwodKola( zmienna r ) {
    return 2 * 3,14 * r;
}

int main(){
    int a1, b1, r1;
    float a2, b2, r2;

    cin >> a1 >> b1 >> r1;
    cin >> a2 >> b2 >> r2;
    
    cout << poleProstokata<int>(a1, b1) << endl;
    cout << poleProstokata<float>(a2, b2) << endl;

    cout << poleProstokata(a1, b1) << endl;
    cout << poleProstokata(a2, b2) << endl;

    cout << poleKola(r1) << endl;
    cout << poleKola(r2) << endl;

    cout << obwodKola(r1) << endl;
    cout << obwodKola(r2) << endl;
}