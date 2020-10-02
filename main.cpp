#include <iostream>
#include <string>


int main() {
  std::cout << "Winning Rules of the Rock paper scissor game as follows: \n Rock vs Paper -> Paper wins \n Rock vs Scissor -> Rock wins \n Paper vs Scissor -> Scissor wins \n";

  while (true) {
    int choice;
    std::cout << "Enter choice \n 1. Rock \n 2. Paper \n 3. Scissor \n";

    // User Input
    std::cout << "User turn: ";
    std::cin >> choice;

    // If choice out of bounds
    while (choice > 3 || choice < 1) {
      std::cout << "Enter valid input: ";
      std::cin >> choice;
    }

    std::string choice_name;
    if (choice == 1) {
      choice_name = "Rock";
    } else if (choice == 2) {
      choice_name = "Paper";
    } else {
      choice_name = "Scissor";
    }

    std::cout << "User choice is: " + choice_name + "\n";

    // Computer chooses randomly any number  
    // among 1 , 2 and 3. Using randint method 
    // of random module
    int comp_choice;
    comp_choice = rand() % 3 + 1;

    // looping until comp_choice value  
    // is equal to the choice value 
    while (comp_choice == choice) {
      comp_choice = rand() % 3 + 1;
    }
    // std::cout << comp_choice;
    // std::cout << "!!!!!!!!!!!!!!!!!!";

    std::string comp_choice_name;
    if (comp_choice == 1) {
      comp_choice_name = "Rock";
    } else if (comp_choice == 2) {
      comp_choice_name = "Paper";
    } else {
      comp_choice_name = "Scissor";
    }

    std::cout << "Computer choice is: " + comp_choice_name + "\n";
    std::cout << choice_name + " V/s " + comp_choice_name + "\n";

    std::string result;
    std::string end;
    if((choice == 1 && comp_choice == 2) ||
      (choice == 2 && comp_choice ==1 ))
      {
        std::cout << "Paper wins!!!! \n";
        result = "Paper";
      }
    else if((choice == 1 && comp_choice == 3) ||
            (choice == 3 && comp_choice == 1))
        {
          std::cout << "Rock wins => \n";
          result = "Rock";
        }
    else 
    {
      std::cout << "Scissor wins => \n";
      result = "Scissor";
    }

    if (result == choice_name)
    {
      std::cout << "<== User wins ==> \n";
    }
    else
    {
      std::cout << "<== Computer wins ==> \n";
    }
    
    std::string ans;
    std::cout << "Do you want to play again? (Y/N) \n";
    std::cin >> ans;

    if (ans == "n" || ans == "N")
    {
      break;
    }
  }
}