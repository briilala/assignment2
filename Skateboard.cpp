#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model)
{
  setBrand(brand);
  setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)  //not sure
{
  double mileage = rand() % 5 + 1;
  mileage /= 10;

  if(time > 25 && time < 250)
  {
    double max = 0.33333 * time;
    mileage = (double)rand() / RAND_MAX;
    return 1 + mileage * (max - 1);
  }

    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
