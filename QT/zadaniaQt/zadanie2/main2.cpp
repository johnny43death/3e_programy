#include <QCoreApplication>
#include <QString>
#include <QDebug>
#include "fraction.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Fraction u1;
    u1.set(2, 4);
    Fraction u2;
    u2.set(3, 4);
    qDebug() << u1.toString();
    qDebug() << u2.toString();

    qDebug() << "Dodawanie";
        qDebug() << u1.toString() << " + " << u2.toString() << " = " << (u1.add(u2)).toString();
    qDebug() << "Odejmowanie";
        qDebug() << u1.toString() << " - " << u2.toString() << " = " << (u1.subtract(u2)).toString();
    qDebug() << "Mnożenie";
        qDebug() << u1.toString() << " * " << u2.toString() << " = " << (u1.multiply(u2)).toString();
    qDebug() << "Dzielenie";
        qDebug() << u1.toString() << " * " << u2.toString() << " = " << (u1.divide(u2)).toString();

    return a.exec();
}
