#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model)
{
  setBrand(brand);
  setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)  //not sure
{
  double mileage = rand() % 14 + 10;
  //double mileage = rand() % 1 + 1;
  if(time > 25 && time < 250)
  {
    int add = 30*mileage;
    mileage += rand() % add + 1;
    //rand() % (0.3(mileage)) + 1
    //rand() % ( maxValue − minValue + 1)) + minValue ;
    //max = 0.3(mileage);
  }
  mileage /= 10;
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString(); //+
           //to_string(mileage);
}
