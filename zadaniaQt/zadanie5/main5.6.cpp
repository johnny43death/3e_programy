#include <QCoreApplication>
#include <QDebug>
#include "hondurota.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto *matiz = new Hondurota(34,0,38,7,70);
    double drive = matiz->drive(60,15);
    qDebug() << "Daewoo Matiz z 34l paliwa jechal przez 15min z predkoscia 60km/h. Pozostalo mu w baku: " + QString::fromStdString(std::to_string(drive));
    double highwayDrive = matiz->highwayDrive(100,70);
    qDebug() << "Daewoo Matiz z reszta paliwa jechal autostrada 100km ze limitem predkosci 70km/h. Trasa zajela mu: " + QString::fromStdString(std::to_string((int)highwayDrive)) + " minut";

    return a.exec();
}
