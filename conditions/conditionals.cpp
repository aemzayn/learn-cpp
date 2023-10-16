#include <iostream>


void getMonth(int number) {
  
}

int main() {
  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age > 18) {
    std::cout << "Welcome to the site.\n";
  } else if (age < 0) {
    std::cout << "You have'nt been born yeet.\n";
  } else if (age > 100) {
    std::cout << "You are too old.\n";
  } else {
    std::cout << "You are too young.\n";
  }

  int monthNmb;

  std::cout << "Enter a number: ";
  std::cin >> monthNmb;

std::string month;
  switch (monthNmb)
  {
  case 1:
    month = "January";
    break;
  case 2:
    month = "February";
    break;
  case 3:
    month = "March";
    break;
  case 4:
    month = "April";
    break;
  case 5:
    month = "May";
    break;
  case 6:
    month = "June";
    break;
  case 7:
    month = "July";
    break;
  case 8:
    month = "August";
    break;
  case 9:
    month = "September";
    break;
  case 10:
    month = "October";
    break;
  case 11:
    month = "November";
    break;
  case 12:
    month = "Desember";
    break;
  default:
    break;
  }

  if (month != "") {
    std::cout << "The month is " << month << ".\n";
  } else {
    std::cout << "Please only enter a number between 1 and 12.";
  }

  return 0;
}
