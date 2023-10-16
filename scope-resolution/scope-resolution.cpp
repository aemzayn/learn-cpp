#include <iostream>

namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}

int main() {
  using namespace first;
  std::cout << x << '\n';

  using std::string;
  string name = "Bro";

  return 0;
}