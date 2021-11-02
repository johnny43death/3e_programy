#include <iostream>
#include <QApplication>
#include <QDebug>
#include "Person.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    auto *gwiezdnaFlota = new Employer("Gwiezdna Flota", "Kosmos");
    auto *posCaptain = new Position("Kapitan", "Bomba");
    auto *posAdmiral = new Position("Admiral", "Ackbar");
    //
    auto *borg = new Employer("Borg", "Miedzynarodowa Konfederacja Technokratyczna");
    auto *posGunner = new Position("Operator dzialka plazmowego", "Operuje dzialkiem plazmowym");
    auto *posCommisar = new Position("Komisarz", "Monitoruje dzialania zolnierzy w koszarach");

    auto *personJean = new Person("Jean-Luc Picard");
    auto *personWesley = new Person("Wesley Crusher");

    gwiezdnaFlota->hire(*personJean, *posCaptain);
    gwiezdnaFlota->hire(*personWesley, *posAdmiral);
    qDebug() <<gwiezdnaFlota->toString();
    qDebug() <<personJean->toString();
    qDebug() <<personWesley->toString();

    //
    borg->hire(*personWesley, *posGunner);
    borg->hire(*personJean, *posCommisar);
    qDebug() <<borg->toString();
    qDebug() <<personJean->toString();
    qDebug() <<personWesley->toString();

    return QApplication::exec();
}