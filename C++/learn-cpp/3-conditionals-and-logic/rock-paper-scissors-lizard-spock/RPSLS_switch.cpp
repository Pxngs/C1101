/* As Sheldon explains, "Scissors cuts paper, paper covers rock,
rock crushes lizard, lizard poisons Spock, Spock smashes scissors,
scissors decapitates lizard, lizard eats paper, paper disproves Spock,
Spock vaporizes rock, and as it always has, rock crushes scissors."
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
int main () {

  // Get computer selection
  srand (time(NULL));
  int computer = rand() % 5 + 1;

  int user;

  std::cout << "Rock\n";
  std::cout << "Paper\n";
  std::cout << "Scissors\n";
  std::cout << "Lizard\n";
  std::cout << "Spock\n";
  std::cout << "Choose your weapon: ";
  std::cin >> user;

  switch (user) {
    case 1: // Human Chooses Rock
      switch (computer) {
        case 1: // Computer Chooses Rock
          std::cout << "You tie! You both chose Rock!\n";
          break;
        case 2: // Human Chooses Paper
            std::cout << "Computer wins! Paper covers Rock!\n";
            break;
        case 3: // Computer Chooses Scissors
            std::cout << "You win! Rock crushes Scissors!\n"
            break;
        case 4: // Computer Chooses Lizard
            std::cout << "You win! Rock crushes Lizard!\n"
            break;
        case 5: // Computer Chooses Spock
            std::cout << "Computer wins! Spock vaporizes Rock!\n"
            break;
        case 6: // Something went wrong with rand
            std::cout << "Computer tried to cheat!?!\n"
            break;
      }
      break;
    case 2: // 




