/* GAME LOGIC:

Scissors cut Paper
Paper covers Rock
Rock crushes Lizard
Lizard poisons Spock
Spock smashes Scissors
Scissors decapitate Lizard
Lizard eats Paper
Paper disproves Spock
Spock vaporizes Rock
Rock crushes Scissors

*/

#include <iostream>
#include <stdlib.h>

// Defining structs for returning results
struct Results {
  int user_score;
  int computer_score;
  std::string result;
