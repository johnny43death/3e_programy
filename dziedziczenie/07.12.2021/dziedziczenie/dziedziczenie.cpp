#include <iostream>
#include <ctime>

using namespace std;

/*class A {
public:
	string a = "klasaA";
	void wypisz() {
		cout << a << endl;
	}
};

class B : public A {
public:
	string b = "klasaB";
	void wypisz() {
		cout << a << " " << b << endl;
	}
};

class C : public B {
public:
	string c = "klasaC";
	void wypisz() {
		cout << a << " " << b << " " << c << endl;
	}
};

int main() {
	A a;
	a.wypisz();
	B b;
	b.wypisz();
	C c;
	c.wypisz();
}*/

class A {
	string a = "klasaA";
public:
	void wypisz() {
		cout << a << endl;
	}
	string getA() { return a; }
};

class B : private A {
//	class B : protected A {
//		między klasami jest publicznie, na zewnątrz jest prywatnie
public:
	string a = getA();
	string b = "klasaB";
	void wypisz() {
		cout << getA() << " " << b << endl;
	}
	string getAA() { return a; };
};

class C : public B {
public:
	string c = "klasaC";
	void wypisz() {
		cout << getAA() << " " << b << " " << c << endl;
	}
};

int main() {
	A a;
	a.wypisz();
	B b;
	b.wypisz();
	C c;
	c.wypisz();
}