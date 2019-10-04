
#include "PoweredVehicle.h"

class Bike : public PoweredVehicle
{

private:
    int maxSpeed;

public:
    Bike();
    explicit Bike(string brand, string model, string FuelType, int maxSpeed);
    virtual ~Bike();
    void setmaxSpeed(int maxSpeed);
    int getmaxSpeed();
    virtual double mileageEstimate(double time);
    virtual string toString();
  };
