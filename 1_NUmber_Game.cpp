//  TASK 1 :   Number Guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    
    srand(time(0));

    
    int secretNumber =rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "__________Welcome to the Number Guessing Game______________\n" <<endl;

    
    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;

        
        if (userGuess > secretNumber) 
		{
            cout <<"IT is too high! Try again.....!\n"<< endl;
        }
		 else if (userGuess < secretNumber) 
		{
            cout << "IT is Too low! Try again.....!\n" <<endl;
        } 
		else 
		{
            cout << "Congratulations! You guessed the correct number: " << secretNumber <<endl;
        }
        attempts++;
        
    } 
	while (userGuess != secretNumber);

    cout << "\nYou took " << attempts << " attempts to guess the correct number." <<endl;


    return 0;
}

