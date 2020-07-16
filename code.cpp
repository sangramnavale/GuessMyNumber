// Guess my Number: 
#include <iostream>
using namespace std;

void big() // Function for telling the user that the number guessed is big
    {
        cout << "Too big!!" << endl;
    }
    
    void small() // Function for telling the user that the number guessed is small
    {
        cout << "Too small!!" << endl;
    }
    
    void correct() // Function for telling the user that the number guessed is correct
    {
        cout << "Yes!! That is correct!!" << endl;
    }

int main()
{
    srand(time(0)); // seed random number
    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int tries = 0;
    int guess;
    
    cout << "Welcome to Guess My Number: " << endl;
    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        if(guess > secretNumber)
        {
            big();
        }
        else if (guess < secretNumber)
        {
            small();
        }
        else if (guess = secretNumber)
        {
            correct();
        }
    } while (guess != secretNumber);
    
    return 0;
}
