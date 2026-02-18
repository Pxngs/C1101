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
};

// function declaration
std::string TranslateChoice(int choice) {
    switch(choice) {
    case 1:
      return "✊";
      break;
    case 2:
      return "✋";
      break;
    case 3:
      return "✌️";
      break;
    case 4:
      return "👌";
      break;
    case 5:
      return "🖖";
      break;
    default:
      break;
  }
}

void AnnounceResults(int user, int computer, std::string result) {
    std::cout << "\nYou chose: " << TranslateChoice(user) << "\n";
    std::cout << "Computer chose: " << TranslateChoice(computer) << "\n";
    std::cout << "And the result is as follows: " << result << "\n";
}

Results PlayWithComputer(int user, int computer, int user_score, int computer_score) {
  if (user == computer) {
    return {user_score, computer_score, "It is a draw!"};
  }

  switch (user) {
    case 1: // Rock
      if (computer == 3 || computer == 4) // Scissors & Lizard
      {
        user_score++
        Return {user_score, computer_score, "You Win!";
      }
      else
      {
        computer_score++;
        return {user_score, computer_score, "You Lose!";
      }
      break;

    case 2: // Paper
      if (computer == 1 || computer == 5) // Rock & Spock
      {
        user_score++;
        return {user_score, computer_score, "You Win!";
      }
      break;

    case 3: // Scissors
      if (computer == 2 || computer == 4) // Paper & Lizard
      }
        user_score++
        return {user_score, computer_score, "You Win!"};
      }
      else
      {
        computer_score++;
        return {user_score, computer_score, "You Lose!"};
      }
      break;
