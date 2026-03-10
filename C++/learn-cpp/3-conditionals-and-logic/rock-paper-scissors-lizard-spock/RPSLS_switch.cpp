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




