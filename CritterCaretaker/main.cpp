#include <iostream>
#include "Critter.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    Critter crit;
    crit.Talk();

    enum Choices {QUIT, TALK, FEED, PLAY};
    int choice;
    do {
        cout << "\nCritter caretaker.\n\n";
        cout << "0 - Quit" << endl;
        cout << "1 - Talk" << endl;
        cout << "2 - Feed" << endl;
        cout << "3 - Play" << endl;

        cout << "Choice: ";
        if(!(cin >> choice)){
            choice = 4;
            cin.clear();
            cin.ignore();
        };

        switch(choice){
            case QUIT:
                cout << "Goodbye!";
                break;
            case TALK:
                crit.Talk();
                break;
            case FEED:
                crit.Eat();
                break;
            case PLAY:
                crit.Play();
                break;
            default:
                cout << "Invalid choice";
        }
    } while(choice != QUIT);

    return 0;
}
