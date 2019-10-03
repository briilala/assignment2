#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{
  private:
    int numberOfEngines;

  public:
    Jet();
    explicit Jet(string brand, string model, string fuelType, int numberOfEngines = 1);
    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int numberOfEngine);
    virtual double mileageEstimate(double time);
    virtual string toString();
};
