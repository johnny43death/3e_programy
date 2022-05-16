#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Info {
public:
    virtual int pole() {
        return 0;
    }
};

class Kwadrat : public Info {
public: 
    int a, h;
    Kwadrat() {};
    Kwadrat(int kwA, int kwH) {
        a = kwA;
        h = kwH;
    };
    int pole() {
        return a * h;
    };
    void wyswietlDane() {
        cout << a << " " << h;
    }
};

class Prostokat : public Kwadrat {
public:
    int grubosc_linii;
    Prostokat(int prA, int prH, int prGL) {
        a = prA;
        h = prH;
        grubosc_linii = prGL;
    };
    int pole() {
        return a * h;
    };
    void wyswietlDane() {
        cout << a << " " << h << " " << grubosc_linii;
    }
};

class Romb : public Kwadrat {
public:
    int kat_ostry;
    Romb(int roA, int roH, int roKO) {
        a = roA;
        h = roH;
        kat_ostry = roKO;
    };
    int pole() {
        return a * h;
    };
    void wyswietlDane() {
        cout << a << " " << h << " " << kat_ostry;
    }
};

int main()
{
    srand(time(NULL));
    int ile=0;
    string jaka="";
    int mA=0, mH=0;
    //try {
        cin >> ile >> jaka;
        //throw(ile);
        //throw(jaka);

        if (jaka == "kwadrat") {
            for (int i = 0; i < ile; i++) {
                mA = rand() % 10 + 1;
                mH = mA;
                Kwadrat* kwadrat = new Kwadrat();
                kwadrat->wyswietlDane();
                cout << "\n" << kwadrat->pole() << "\n";
                delete kwadrat;
                mA = 0;
                mH = 0;
            }
        }
        else if (jaka == "prostokat") {
            for (int i = 0; i < ile; i++) {
                mA = rand() % 10 + 1;
                mH = rand() % 10 + 1;
                int mGL = rand() % 5 + 1;
                Prostokat* prostokat = new Prostokat(mA, mH, mGL);
                prostokat->wyswietlDane();
                cout<< "\n" << prostokat->pole() << "\n";
                delete prostokat;
                mA = 0;
                mH = 0;
                mGL = 0;
            }
        }
        else if (jaka == "romb") {
            for (int i = 0; i < ile; i++) {
                mA = rand() % 10 + 1;
                mH = rand() % 10 + 1;
                int mKO = rand() % 89 + 1;
                Romb* romb = new Romb(mA, mH, mKO);
                romb->wyswietlDane();
                cout << "\n" << romb->pole() << "\n";
                delete romb;
                mA = 0;
                mH = 0;
                mKO = 0;
            }
        }
   }
/*
    catch (int ile) {
        if (ile < 1 || ile>100) {
            cout << "Blad! Wpisz liczbe figur z zakresu 1-100.";
            cin >> ile;
        }
        else return true;
    }
    catch (string jaka) {
        if (jaka != "kwadrat" || jaka != "prostokat" || jaka != "romb") {
            cout << "Blad! Wpisz liczbe figur z zakresu 1-100.";
            cin >> jaka;
        }
        else return true;
    }*/
}