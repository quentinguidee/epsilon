#ifndef POINCARE_HYPERBOLIC_ARC_SINE_H
#define POINCARE_HYPERBOLIC_ARC_SINE_H

#include <poincare/layout_helper.h>
#include <poincare/static_hierarchy.h>
#include <poincare/approximation_helper.h>

namespace Poincare {

class HyperbolicArcSine : public StaticHierarchy<1>  {
  using StaticHierarchy<1>::StaticHierarchy;
public:
  Type type() const override;
private:
  /* Layout */
  LayoutRef createLayout(Preferences::PrintFloatMode floatDisplayMode, int numberOfSignificantDigits) const override {
    return LayoutHelper::Prefix(this, floatDisplayMode, numberOfSignificantDigits, name());
  }
  int writeTextInBuffer(char * buffer, int bufferSize, Preferences::PrintFloatMode floatDisplayMode, int numberOfSignificantDigits) const override {
    return LayoutHelper::writePrefixExpressionTextInBuffer(this, buffer, bufferSize, floatDisplayMode, numberOfSignificantDigits, name());
  }
  const char * name() const { return "asinh"; }
  /* Simplification */
  Expression shallowReduce(Context& context, Preferences::AngleUnit angleUnit) override;
  /* Evaluation */
  template<typename T> static std::complex<T> computeOnComplex(const std::complex<T> c, Preferences::AngleUnit angleUnit);
  Evaluation<float> approximate(SinglePrecision p, Context& context, Preferences::AngleUnit angleUnit) const override {
    return ApproximationHelper::Map<float>(this, context, angleUnit,computeOnComplex<float>);
  }
  Evaluation<double> approximate(DoublePrecision p, Context& context, Preferences::AngleUnit angleUnit) const override {
    return ApproximationHelper::Map<double>(this, context, angleUnit, computeOnComplex<double>);
  }
};

}

#endif
