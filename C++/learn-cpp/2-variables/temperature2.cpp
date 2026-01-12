#include <iostream>

int main () {

  double tempf;
  double tempc;

  //Ask User
  std::cout << "Enter The Temperature In Fahrenheit: ";

  std::cin >> tempf;

  tempc = (tempf -32) / 1.8;

  std:cout << "The temp is" << tempc << " degrees Celsius.\n";

  return 0; 

}
