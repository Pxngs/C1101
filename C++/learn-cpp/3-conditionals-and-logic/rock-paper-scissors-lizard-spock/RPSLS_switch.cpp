#include <iostream>
#include <stdlib.h>
#include <ctime>
int main () {

  // Get computer selection
  srand (time(NULL));
  int computer = rand() % 5 + 1;
