#ifndef PROBABILITE_LEFT_INTEGRAL_CALCULATION_H
#define PROBABILITE_LEFT_INTEGRAL_CALCULATION_H

#include "calculation.h"

namespace Probability {

class LeftIntegralCalculation : public Calculation {
public:
  LeftIntegralCalculation();
  ~LeftIntegralCalculation() override {};
  Type type() const override;
  int numberOfParameters() override;
  const char * legendForParameterAtIndex(int index) override;
  void setParameterAtIndex(float f, int index) override;
  float parameterAtIndex(int index) override;
private:
  void compute(int indexKnownElement) override;
  float m_lowerBound;
  float m_result;
};

}

#endif
