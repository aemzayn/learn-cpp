#include <iostream>

int main() {
  char x = 100;
  // explicit casts
  std::cout << (int)x << '\n';

  int correct = 8;
  int questions = 10;
  double score = correct / (double) questions * 100;

  std::cout << score << "%";

  return 0;
}