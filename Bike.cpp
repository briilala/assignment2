#include "Bike.h"

Bike::Bike()
{
  maxSpeed = 50;
  setBrand("Toyota");
  setModel("RGB4500");
}

Bike::Bike(string brand, string model, string FuelType, int maxSpeed)
{
  setBrand(brand);
  setModel(model);
  setFuelType(fuelType);
  setmaxSpeed(maxSpeed);
}

Bike::~Bike() = default;

void Bike::setmaxSpeed(int max)
{
  maxSpeed = max;
}

int Bike::getmaxSpeed()
{
  return maxSpeed;
}

double Bike::mileageEstimate(double time)
{
  double mileage = rand() % 46 + 35;
  if(maxSpeed > 70)
    mileage += time/maxSpeed;
    return mileage;
}

string Bike::toString()
{
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tmaxSpeed: " +
         to_string(getmaxSpeed());
}
