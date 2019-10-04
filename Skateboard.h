#include "Vehicle.h"

class Skateboard : public Vehicle
{

public:
  explicit Skateboard(string brand, string model);
  virtual ~Skateboard();
  virtual double mileageEstimate(double time);
  virtual string toString();

};
