#include <iostream>
using namespace std;

/* 
klasy i obiekty +
tworzenie i inicjowanie obiektów +
hermetyzacja danych +
mechanizm dziedziczenia +
polimorfizm +
mechanizm abstrakcji
funkcje i klasy zaprzyjaźnione
szablony funkcji i klas +
obsługa błędów i wyjątków +
*/

// polimorfizm
class Car{
public:
    void honk();
};

class Tir{
public:
    void honk(){
        cout << "HOOOONK" << endl;
    }
};

class Tesla{
public:
    void honk(){
        cout << "BEEP BEEEEP" << endl;
    }
};

class Example{
protected:
    int variable;
public:
    Example();
    Example(int);
    Example(Example &copy);
    void printVar();
};

Example::Example(){
    variable = 10;
}

// metoda zwykła
/*Example::Example(int v){ 
    variable = v;
}*/

// metoda z listą inicjalizacyjną
Example::Example(int v) : variable(v){ 
    // tu nic nie musi być, wystarczy to po ':'
}

// konstruktor kupiujący
Example::Example(Example &copy){
    variable = copy.variable;
}

void Example::printVar(){
    cout << variable << endl;
}

class ExampleChild : protected Example{
private:
    string name;
public:
    ExampleChild();
    ExampleChild(int, string);
    void printVar();
};

ExampleChild::ExampleChild(){
    Example(); // oddelegowanie konstruktora
    name = "default";
}

ExampleChild::ExampleChild(int v, string n){
    variable = v;
    name = n;
}

void ExampleChild::printVar(){
    cout << variable << " " << name << endl;
}

template <typename T>
T hardMath(T a, T b){
    return a + b;
}

int main(){
    Example e(5);
    e.printVar();

    ExampleChild ec(5, "banana");
    ec.printVar();

    try{
        string errorString = "Error";
        int number;
        cin >> number;
        if(number == 0){
            cout << "ABC" << endl;
        }
        else if(number == 1){
            cout << "CBA" << endl;
        }
        else{
            throw errorString;
        }
    }
    catch(string errorName){
        cout << errorName << endl;
    }
}