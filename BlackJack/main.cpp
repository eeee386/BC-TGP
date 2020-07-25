#include <iostream>
#include <vector>
#include <string>
#include "BlackJack/Deck/Deck.h"
#include "BlackJack/Player/Player.h"

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

void BlackJack();

int main() {
    BlackJack();
    return 0;
}

void BlackJack(){
    vector<GenericPlayer*> players;
    Deck* deck = new Deck();
    int playerNumber;
    cout << "How many players?: ";
    while(true){
        if(cin >> playerNumber){
            break;
        } else {
            cout << "Not a valid choice!\n";
            cin.ignore();
            cin.clear();
        }
    }
    cout << endl;
    cout << "Please add players:\n";
    string playerName;
    int i = 0;
    while(i != playerNumber){
        cout << "Player number " << i+1 << ": ";
        cin >> playerName;
        players.push_back(new Player(playerName));
        i++;
    }
    string houseName("House");
    players.emplace_back(new House(houseName));

    for(auto & player: players){
        player->play(*deck);
    }
}
