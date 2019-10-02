#include "Jet.h"
#include <stdlib>

Jet::Jet()
{
  numberOfEngines = 1;
  milage = rand() % 61 + 40; //A random number between 40 and 100 miles per minute.
  //If the Jet has more than 2 engines and the fuel type is “Rocket”,
  //the mileage will be boosted by 5.5% per engine. Jet inherits from
  //the PoweredVehicle class.
}
