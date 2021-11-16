#ifndef HONDUROTA_H
#define HONDUROTA_H

class Hondurota {
private:
    double m_Fuel;
    double m_Odometer;
    double m_TankCapacity;
    double m_MPG;
    double m_Speed;
    double m_FuelConsumptionRate;
public:
    double addFuel(double);
    double getSpeed();
    double getTankCapacity();
    double getMPG();
    double getFuel();
    double getOdometer();
    double getFuelConsumptionRate();

    double drive(double, int);
    double highwayDrive(double, double);

    Hondurota(double fuel, double odom, double capacity, double mpg, double fcr);
};


#endif //HONDUROTA_H
