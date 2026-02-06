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

    std::cout << "As i see it, yes.\n";

  }
  else if (choice == 6) {

    std::cout << "Most likely.\n";

  }
  else if (choice == 7) {

    std::cout << "Outlook good.\n";

  }
  else if (choice == 8) {

    std::cout << "Yes.\n";
  }
  else if (choice == 9) {

    std::cout << "Signs point to yes.\n";

  }
  else if (choice == 10) {

    std::cout << "Reply hazy, try again.\n";

  }
  else if (choice == 11) {

    std::cout << "Ask again later.\n";

  }
  else if (choice == 12) {

    std::cout << "Better not tell you now.\n";

  }
  else if (choice == 13) {

    std::cout << "Cannot predict now.\n";

  }
  else if (choice == 14) {

    std::cout << "Concentrate and ask again\n";

  }
  else if (choice == 15) {

    std::cout << "Don't count on it.\n";

  }
  


