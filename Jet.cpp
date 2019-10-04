#include "Jet.h"


Jet::Jet()
{
  numberOfEngines = 1;
  setBrand("Dodge");
  setModel("Charger");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines)
{
  setBrand(brand);
  setModel(model);
  setFuelType(fuelType);
  setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines()
{
  return numberOfEngines;
}
void Jet::setNumberOfEngines(int numberOfEngine)
{
  numberOfEngines = numberOfEngine;
}
double Jet::mileageEstimate(double time) //based on equation using andom number generator.
{
  double mileage = rand() % 61 + 40;
  if(numberOfEngines > 2 && fuelType == "Rocket")
  {
    double num = numberOfEngines * 0.055;
    num *= mileage;
    mileage += num;
  }
    return (int)mileage;
}
string Jet::toString() {
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
         to_string(getNumberOfEngines());
       }
