#include <iostream>
#include <cmath>

int main() {
  double x = 3;
  double y = 2;
  double z;

  z = std::max(x, y);
  z = std::min(x, y);
  z = pow(2, 4);
  z = sqrt(25);
  z = abs(-3);
  z = round(x);
  z = ceil(x);

  std::cout << z << '\n';

  return 0;
}