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
double Jet::mileageEstimate(double time)
{
  double mileage = rand() % 61 + 40;
  if(getNumberOfEngines() > 2 && fuelType == "Rocket")
  {
    mileage += numberOfEngines * 0.055;
  }
    return mileage;  //A random number between 40 and 100 miles per minute.
    //If the Jet has more than 2 engines and the fuel type is “Rocket”,
    //the mileage will be boosted by 5.5% per engine. Jet inherits from
    //the PoweredVehicle class.
}
string Jet::toString() {
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
         to_string(getNumberOfEngines());
       }
