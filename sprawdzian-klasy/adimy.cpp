#include <iostream>
#include <exception>

using namespace std;

/*
 C++::::::::::::::::::
klasy i obiekty
tworzenie i inicjowanie obiektów
hermetyzacja danych
mechanizm dziedziczenia
polimorfizm
mechanizm abstrakcji???
funkcje i klasy zaprzyjaźnione
szablony funkcji i klas
obsługa błędów i wyjątków
 */

void spacer() {
    cout << "\n==========================================\n" << endl;
}

//PRZYKŁADOWA KLASA (BEZ HERMETYZACJI)
class Klasa1 {
public:
    int a, b;

    ~Klasa1() {}; //Destruktor

    Klasa1(int _a, int _b) { //Konstruktor
        a = _a;
        b = _b;
    }

    void wyswietl() { //Funkcja
        cout << a << " " << b << endl;
    }
};

//PRZYKŁADOWA KLASA (Z HERMETYZACJĄ)
class Klasa2 {
private:
    int a;
    string b;
public:
    Klasa2(int _a, string _b) {
        a = _a;
        b = _b;
    }

    void wyswietl() { //Funkcja
        cout << a << " " << b << endl;
    };

    int getA() { //pobieranie a
        return a;
    };

    string getB() {
        return b;
    };

    void setA(int _a) { //ustawianie a
        a = _a;
    }

    void setB(string _b) {
        b = _b;
    }
};

//DZIEDZICZENIE KLAS
//PUBLIC PRIVATE PROTECTED
class Parent {
public:
    string imie, nazwisko;

    virtual void wyswietl() {
        cout << imie << " " << nazwisko << " " << endl;
    }
};

class Child : public Parent {
public:
    string stanowisko;

    void wyswietl() {
        cout << imie << " " << nazwisko << " " << stanowisko << endl;
    }
};


//POLIMORFIZM
class Zwierze {
public:
    void dzwiek() {
        cout << "Dzwiek" << endl;
    }
};

class Pies : public Zwierze {
public:
    void dzwiek() {
        cout << "Hau hau" << endl;
    }
};

class Kot : public Zwierze {
public:
    void dzwiek() {
        cout << "Miau" << endl;
    }
};

//CLASS FRIENDS

//DLA KLASY
class kolega1 {
private:
    string imie = "Klawiatura";
public:
    friend class kolega2; //tutaj mozna tez dac funkcje np: friend void kolega2::nazwafunkcji(string cos);

};

class kolega2 {
public:
    void wyswietlKolege(kolega1 kolega) {
        cout <<"Imie kolegi: "<< kolega.imie << endl;
    }
};

//DLA FUNKCJI

class B;

class A {
public:
    void wyswietlB(B);
};

class B {
private:
    int b;

public:
    B() { b = 0; }

    friend void A::wyswietlB(B x); // firend dla funkcji
};

void A::wyswietlB(B x) {
    cout << x.b << endl;
}


//SZABLONY FUNKCJI I KLAS

template <typename T>
T min(T& zmienna1, T& zmienna2){

    if(zmienna1 < zmienna2){
        return zmienna1;
    }else{
        return zmienna2;
    }
}

int main() {

    //tworzenie i inicjowanie obiektu
    Klasa1 nazwa(5, 10);
    nazwa.wyswietl();

    spacer();

    //HERMETYZACJA
    Klasa2 n2(10, "TEST");
    n2.wyswietl();
    n2.setA(69);
    n2.wyswietl();

    spacer();

    //DZIEDZICZENIE KLAS
    Parent *p;
    Child c;

    p = &c;
    p->imie = "Jan";
    p->nazwisko = "Kowalski";
    ((Child *) p)->stanowisko = "Kasjer";

    spacer();

    //POLIMORFIZM

    Zwierze z1;
    Pies pies;
    Kot kot;

    z1.dzwiek();
    pies.dzwiek();
    kot.dzwiek();

    spacer();

    //KLASY ZAPRZYJAZNIONE
    kolega1 kolega1;
    kolega2 kolega2;
    kolega2.wyswietlKolege(kolega1);

    A a;
    B x;
    a.wyswietlB(x);

    spacer();

    //SZABLONY

    //funkcja
    int nr1 = 10, nr2 = 5;
    int res = min<int>(nr1,nr2);
    cout<<res<<" "<< min(nr1,nr2)<<endl;

    spacer();


    //WYJĄTKI I BLEDY

    string usernames[3] = {"Qwerty","Bulka", "Qwerty"};

    try{
        for(int i = 0; i < 3; i++){
            if(usernames[i] == "Qwerty"){
                cout<<usernames[i]<<endl;
            }else{
                throw i;
            }
        }
    }
    catch(int i){
        cout<<"Inny username przy usernames["<<i<<"]"<<endl;
    }


    return 0;
}
