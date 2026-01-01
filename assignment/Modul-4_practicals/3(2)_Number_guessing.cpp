//. Number Guessing Game
//o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int secretNumber, guess;
    srand(time(0));//generate random num according to current time
    secretNumber = rand() % 100 + 1;//gen num and % limits 0 to 99 and +1 adds 1 to 100 
    cout << "Guess a number between 1 and 100." << endl;
    while (true)
	{
        cout << "Enter your guessing number: ";
        cin >> guess;

        if (guess == secretNumber)
		{
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            break;
        }
        else if (guess > secretNumber)
		{
            cout << "Too high then secret number" << endl;
        }
        else
		{
            cout << "Too low then secret number" << endl;
        }
    }
    return 0;
}

