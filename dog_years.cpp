#include <iostream>

int main() {

  //age of my dog
int dog_age;
std::cout << "give the age of your dog: ";
std::cin >> dog_age;
//declare three more int variables
int early_years, later_years, human_years;
//The first two years of a dog’s life count as 21 human years.
early_years=21;
//Each following year counts as 4 human years.
later_years= (dog_age-2)*4;
human_years=early_years+later_years;
std::cout << "My name is rocky! Ruff ruff, I am "<< human_years << "years old in human years.";

  return 0;
  
}