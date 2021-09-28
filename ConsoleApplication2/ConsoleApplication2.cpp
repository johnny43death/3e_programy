#include <iostream>
using namespace std;

int main()
{
    int x, xD, pom = 0, NWD = 0, NWW = 0;
    cout << "wprowadź liczby yo! \n";
    cin >> x >> xD;
    if (x != xD) {
        if (x > xD) {
            NWD = x - xD;
        }
        else {
            NWD = xD - x;
        }
    }
    cout << "NWD wynosi: " << NWD << "\n";
    pom = x * xD;
    NWW = pom / NWD;
    cout << "NWW wynosi: " << NWW << "\n";
}