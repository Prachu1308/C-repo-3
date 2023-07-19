
/*                                         NUMBER_GUESSING                                */


// ############################# Declaring Header Files ###################################

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); // Seed the random number generator

    // ############################# Declaring Variables ###################################


    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int tries = 0;
    
    cout << "Welcome to the Number Guessing Game!" <<endl;
    cout << "I have chosen a number between 1 and 100." <<endl;
    
    // ############################ Conditional Statement ###########################
    do {
        std::cout << "Enter your guess: \n";
        std::cin >> guess;
        
        tries++;
        
        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." <<endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries." <<endl;
        }
    } while (guess != secretNumber);

    //################################ Result  #############################
    
    return 0;
}