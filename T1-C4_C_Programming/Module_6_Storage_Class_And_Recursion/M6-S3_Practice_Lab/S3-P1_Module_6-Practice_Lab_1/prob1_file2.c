#include <math.h>
#include "custom.h"

float area(float a, float b, float c) {
  float s = 0.5 * perimeter(a, b, c);
  float ar = pow(s * (s - a) * (s - b) * (s - c), 0.5);
  return ar;
}