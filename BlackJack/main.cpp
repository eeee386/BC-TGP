#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "BlackJack/Deck/Deck.h"
#include "BlackJack/Player/Player.h"

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

void BlackJack();

void checkWinningInBlackJack(const vector<GenericPlayer *> &players);
void helpOutWriting(const vector<GenericPlayer *> &results);

int main() {
    BlackJack();
    return 0;
}

void BlackJack() {
    vector<GenericPlayer *> players;
    Deck *deck = new Deck();
    int playerNumber;
    cout << "How many players?: ";
    while (true) {
        if (cin >> playerNumber) {
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
    while (i != playerNumber) {
        cout << "Player number " << i + 1 << ": ";
        cin >> playerName;
        players.push_back(new Player(playerName));
        i++;
    }
    string houseName("House");
    players.emplace_back(new House(houseName));

    for (auto &player: players) {
        player->play(*deck);
    }
    cout << "\n\n";
    for (auto &player: players) {
        cout << player->GetName() << "\n";
        player->writeOutCards();
    }
    checkWinningInBlackJack(players);
}

void checkWinningInBlackJack(const vector<GenericPlayer *> &players) {
    vector<GenericPlayer *> winners;
    auto houseIter = players.end() - 1;
    if ((*houseIter)->GetCardsValue() <= 21) {
        std::copy_if(players.begin(), players.end() - 1, std::back_inserter(winners),
                     [&](const GenericPlayer *i) {
                         int playerCardValue = i->GetCardsValue();
                         return (playerCardValue > (*houseIter)->GetCardsValue() && playerCardValue <= 21);
                     });
        if (!winners.empty()) {
            cout << "Winner(s): ";
            helpOutWriting(winners);
        } else {
            vector<GenericPlayer *> ties;
            std::copy_if(players.begin(), players.end(), std::back_inserter(ties),
                         [&](const GenericPlayer *i) { return i->GetCardsValue() == (*houseIter)->GetCardsValue(); });
            if(ties.size() == 1){
                cout << "House wins!";
            } else {
                helpOutWriting(ties);
            }
        }
    } else {
        std::copy_if(players.begin(), players.end() - 1, std::back_inserter(winners),
                     [&](const GenericPlayer *i) {
                         return i->GetCardsValue() <= 21;
                     });
        if(winners.empty()){
            cout << "Everybody busted" << endl;
        } else {
            cout << "Winner(s): ";
            helpOutWriting(winners);
        }
    }
}

void helpOutWriting(const vector<GenericPlayer *> &results){
    for(const auto &winner : results){
        cout << winner->GetName() << " ";
    }
    cout << endl;
}

