#include <iostream>

int main () 
{

  double p;
  double q;
  double c;

  double dollars;

  std::cout << " 🇲🇽 Enter number of Pesos: ";
  std::cin >> p;

  std::cout << " 🇦🇷 Enter number of Guatemalan Quetzals: ";
  std::cin >> q;

  std::cout << " 🇸🇻 Enter number of Salvadoran Colons: ";
  std::cin >> c;

  dollars = 0.049 * p + 0.1305 * q + 0.1144 * c;

  std::cout << "Total USD = $ " << dollars << ".\n";

}
