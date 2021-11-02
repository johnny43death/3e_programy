#include <fraction.h>
#include <QTextStream>
//#include <QDebug>

int main(){
    QTextStream cout(stdout);
    Fraction f1;
    f1.set(1,3); // 1/3
    Fraction f2;
    f2.set(1,2); // 1/2
    Fraction f3;

    f3 = f1.add(f2);
    cout<<f3.toString();

    f3 = f1.subtract(f2);
    cout<<f3.toString();

    f3 = f1.multiply(f2);
    cout<<f3.toString();

    f3 = f1.divide(f2);
    cout<<f3.toString();

//    qDebug()<<f3.toString();
}
