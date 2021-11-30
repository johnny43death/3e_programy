#include <iostream>

using namespace std;

class Komputer {
public:
    string marka, model;
    Komputer() {};
    Komputer(string, string);
};

Komputer::Komputer(string pMarka, string pModel) {
    marka = pMarka;
    model = pModel;
}

class PC : public Komputer {
public:
    string rodzajObudowy;
    PC(string, string, string);
};

PC::PC(string pMarka, string pModel, string pRodzaj) {
    marka = pMarka;
    model = pModel;
    rodzajObudowy = pRodzaj;
}

class Laptop : public Komputer {
public:
    int DPE;
    string kolorObudowy;
    Laptop(string, string, int, string);
    void wyswietl() {
        cout << marka << " " << model << endl;
        cout << DPE << " " << kolorObudowy << endl;
    }
};

Laptop::Laptop(string pMarka, string pModel, int pDPE, string pKolor) {
    marka = pMarka;
    model = pModel;
    DPE = pDPE;
    kolorObudowy = pKolor;
}

int main() {
    string marka, model, kolorO;
    int dpe;
    cin >> marka >> model >> dpe >> kolorO;
    Laptop l1 = Laptop(marka, model, dpe, kolorO);
    l1.wyswietl();
}