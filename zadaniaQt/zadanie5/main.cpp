#include <QDebug>
#include <QString>
#include "Hondurota.h"

int main() {
    auto *polonez = new Hondurota(34,0,38,7,70);
        double drive = polonez->drive(60,15);
        qDebug() << "Polonez z 34l paliwa jechal przez 15min z predkoscia 60km/h. Pozostalo mu w baku: " + QString::fromStdString(std::to_string(drive));
        double highwayDrive = polonez->highwayDrive(100,70);
        qDebug() << "Polonez z reszta paliwa jechal autostrada 100km ze limitem predkosci 70km/h. Trasa zajela mu: " + QString::fromStdString(std::to_string((int)highwayDrive)) + " minut";
}
