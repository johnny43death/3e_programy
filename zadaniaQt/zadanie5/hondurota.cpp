#include <ctime>
#include <cstdlib>
#include "hondurota.h"

//zamiast mil mamy kilometry, zamiast galonów litry

Hondurota::Hondurota(double fuel, double odom, double capacity, double mpg, double fcr) :
    m_Fuel(fuel), m_Odometer(odom), m_TankCapacity(capacity), m_MPG(mpg), m_Speed(0), m_FuelConsumptionRate(fcr) {}

double Hondurota::addFuel(double gal) {
    if(gal <= 0 || gal > this->m_TankCapacity){
        this->m_Fuel = this->m_TankCapacity;
    }else{
        this->m_Fuel = gal;
    }

    return this->m_Fuel;
}

double Hondurota::getSpeed() {
    return m_Speed;
}

double Hondurota::getTankCapacity() {
    return m_TankCapacity;
}

double Hondurota::getMPG() {
    return m_MPG;
}

double Hondurota::getFuel() {
    return m_Fuel;
}

double Hondurota::getOdometer() {
    return m_Odometer;
}

double Hondurota::getFuelConsumptionRate() {
    return m_FuelConsumptionRate;
}

double Hondurota::drive(double speed, int minutes) {
    int seconds = minutes * 60;
    double meterPerSecond = speed * (1/3.6);
    double metersPerLitre = this->m_MPG * 1000;
    double fuelPerSecond = meterPerSecond / metersPerLitre;
    for(int s = 0; s < seconds; s++){
        if(m_Fuel - fuelPerSecond <= 0){
            this->m_Fuel = 0;
            break;
        }
        this->m_Odometer += meterPerSecond;
        this->m_Fuel -= fuelPerSecond;
    }
    return this->m_Fuel;
}

double Hondurota::highwayDrive(double distance, double speedLimit) {
    double meters = distance * 1000;

    double speed = speedLimit;
    int drivingTime = 0;

    srand(time(nullptr));
    while(true){
        int randomSpeedChange = rand() % 2 == 0 ? -5 : 5;
        speed += randomSpeedChange;
        if(speed > (speedLimit + 40) || speed < 0){
            speed = speedLimit;
        }

        double metersPassed = (speed * (1/3.6)) * 60;
        meters -= metersPassed;
        double mpg = speed > this->getFuelConsumptionRate() ? (this->getMPG() + this->getMPG() * ((speed - this->getFuelConsumptionRate()/100))) : this->getMPG();
        double metersPerLitre = mpg * 1000;
        double fuelUsed = metersPassed / metersPerLitre;

        this->m_Fuel -= fuelUsed;
        drivingTime++;

        if(this->m_Fuel <= 0){
            this->m_Fuel = 0;
            break;
        }
        if(meters <= 0){
            break;
        }
    }

    return drivingTime;
}
