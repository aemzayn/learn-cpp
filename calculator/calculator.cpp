#include <iostream>
#include <cmath>

using namespace std;

int main() {
  char op;
  double num1;
  double num2;
  double result;

  cout << "*** Calculator ***" << endl;

  cout << "Enter operation (+ - * /): ";
  cin >> op;

  cout << "Enter #1: ";
  cin >> num1;

  cout << "Enter #2: ";
  cin >> num2;

  switch (op) {
    case '+':
      result = num1 + num2;
      cout << "The result is " << result << endl;
      break;
    case '-':
      result = num1 - num2;
      cout << "The result is " << result << endl;
      break;
    case '*':
      result = num1 * num2;
      cout << "The result is " << result << endl;
      break;
    case '/':
      result = num1 / num2;
      cout << "The result is " << result << endl;
      break;
    default:
      cout << "Invalid operation bro";
      break; 
  }

  cout << "Calculator finished.";
  return 0;
}