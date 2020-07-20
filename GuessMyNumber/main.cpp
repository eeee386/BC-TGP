//Die Roller
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void menuChooser() {
    cout << "Choose your difficulty: \n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n";

    enum difficulty {EASY = 1, NORMAL, HARD};
    cout << "Please write the number here: ";
    short choice;
    cin >> choice;
    cout << endl;
    switch (choice) {
        case EASY: cout << "You have chosen Easy";
            break;
        case NORMAL: cout << "You have chosen Normal";
            break;
        case HARD: cout << "You have chosen Hard";
            break;
        default: cout << "Invalid choice";
    }
}

void guessMyNumberComputerSelect() {
    //seed random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber = rand();
    //get a number between 1 and 100
    int pickedNumber = (randomNumber % 100) + 1;
    int guess = 0;
    short tries = 0;
    while(guess != pickedNumber){
        cout << "Pick a number between 1 and 100: \n";
        cin >> guess;
        if(guess < 1 || guess > 100){
            cout << "This is not a valid number.\n\n";
            continue;
        }
        if(guess < pickedNumber){
            cout << "Too low!\n\n";
        } else if (guess > pickedNumber){
            cout << "Too high!\n\n";
        }
        ++tries;
    }
    cout << "You guessed it in " << tries << " tries!" << endl;
}

void guessMyNumberPlayerSelect() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber;
    short pickedNumber;
    cout << "Please pick a number: \n";
    cin >> pickedNumber;
    int guess = 0;
    int closestBiggerExclusive = 101;
    int closestSmallerExclusive = 0;
    enum relativeValue {BIGGER = 'b', SMALLER = 's', EQUAL = 'e'};
    char biggerOrSmallerOrEqual;
    int tries = 0;
    while (guess != pickedNumber){
        randomNumber = rand();
        // I am not perfectly sure this is correct, but it finds the correct answer after a while
        guess = (randomNumber % (closestBiggerExclusive - closestSmallerExclusive - 1)) + closestSmallerExclusive + 1;
        ++tries;
        cout << "Is " << guess << " bigger, smaller or equal? (b/s/e): ";
        cin >> biggerOrSmallerOrEqual;
        cout << endl;
        while(!(biggerOrSmallerOrEqual == BIGGER || biggerOrSmallerOrEqual == SMALLER || biggerOrSmallerOrEqual == EQUAL)){
            cout << "This is not a valid answer. Please choose 's', 'b' or 'e': ";
            cin >> biggerOrSmallerOrEqual;
        }
        if(biggerOrSmallerOrEqual == BIGGER){
            closestBiggerExclusive = guess;
        } else if (biggerOrSmallerOrEqual == SMALLER) {
            closestSmallerExclusive = guess;
        } else {
            cout << "I guesses it in " << tries << " tries" << endl;
        }
        if(closestBiggerExclusive <= closestSmallerExclusive) {
            cout << "You made a mistake in the answers. Let's try again!";
            closestSmallerExclusive = 0;
            closestBiggerExclusive = 100;
        }
    }
}

int main()
{
    guessMyNumberPlayerSelect();
    return 0;
}