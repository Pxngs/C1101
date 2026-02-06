#include <iostream>
#include <cstdlib>

int main () {

  std::cout << "MAGIC 🎱 SAYS: \n\n";

  srand(time(NULL));

  int choice = std::rand() % 20;

  if (choice == 0) {

    std::cout << "It is certain.\n";

  }
  else if (choice == 1) {

    std::cout << "It is decidedly so.\n";

  }
  else if (choice == 2) {

    std::cout << "Without a doubt.\n";

  }
  else if (choice == 3) {

    std::cout << "Yes - definently.\n";

  }
  else if (choice == 4) {

    std::cout << "You may rely on it.\n";

  }
  else if (choice == 5) {

    std::cout << "
