#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Own implementation, could be buggy.
const char EMPTY = '_';

bool checkPlayerWinning(const vector<vector<char>>& signs);
bool checkRows(const vector<vector<char>>& signs);
bool checkColumns(const vector<vector<char>>& signs);
bool checkDiagonal(const vector<vector<char>>& signs);

void addSign(vector<vector<char>>& signs, char sign);
int addHelper(const string & prompt);

char changePlayer(char player1, char player2, char activePlayer);
void writeOutBoard(const vector<vector<char>>& signs, char activePlayer);

bool askPlayerIfWantsToPlayWithComputer();
bool doYouWantToStart();
bool askPlayerHelper(const string & prompt);

void computerMove(vector<vector<char>>& signs, char activePlayer, char notActive);
bool computerCheckWinning(vector<vector<char>>& signs, char activePlayer, char notActive);
bool computerRowHelper(vector<vector<char>>& signs, char signToWatch, char signToAdd);
bool computerColumnHelper(vector<vector<char>>& signs, char signToWatch, char signToAdd);
bool computerDiagHelper(vector<vector<char>>& signs, char signToWatch, char signToAdd);


int main(){
    const char player1 = 'x';
    const char player2 = 'o';
    char activePlayer = player2;
    char playerPlayer;
    char computerPlayer;
    bool isComputer = askPlayerIfWantsToPlayWithComputer();
    if(isComputer){
        bool playerStarts = doYouWantToStart();
        if(playerStarts){
            computerPlayer = player2;
            playerPlayer = player1;
        } else {
            computerPlayer = player1;
            playerPlayer = player2;
        }
    }
    vector<vector<char>> signs = {{EMPTY, EMPTY, EMPTY}, {EMPTY, EMPTY, EMPTY}, {EMPTY, EMPTY, EMPTY}};
    while(!checkPlayerWinning(signs)){
        activePlayer = changePlayer(player1, player2, activePlayer);
        writeOutBoard(signs, activePlayer);
        if(isComputer && activePlayer == computerPlayer){
            computerMove(signs, computerPlayer, playerPlayer);
        } else {
            addSign(signs, activePlayer);
        }
        cout << endl;
    }
    writeOutBoard(signs, activePlayer);
    cout << "The winner is : " << activePlayer;

    return 0;
}
char changePlayer(char player1, char player2, char activePlayer){
    if(activePlayer == player1){
        return player2;
    } else {
        return player1;
    }
}


void addSign(vector<vector<char>>& signs, char sign){
    int row;
    int column;
    while(true) {
        row = addHelper("Add sign on board (row)(1-3): ");
        column = addHelper("Add sign on board (column)(1-3): ");
        if(signs[row][column] != EMPTY){
            cout << "Please choose another place!" << endl;
        } else {
            break;
        }
    }

    signs[row][column] = sign;
}

int addHelper(const string & prompt){
    int num = 0;
    cout << prompt;
    cin >> num;
    while(num < 1 || num > 3){
        cout << "This is not a valid value. Please add again: ";
        cin >> num;
    }
    return num-1;
}

void writeOutBoard(const vector<vector<char>>& signs, char activePlayer){
    for (const auto & i : signs){
        for(const auto & j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "Active player is: " <<  activePlayer << endl;
}


bool checkPlayerWinning(const vector<vector<char>>& signs){
    bool flag = checkRows(signs) || checkColumns(signs) || checkDiagonal(signs);
    return flag;
}

bool checkRows(const vector<vector<char>>& signs){
    bool flag;
    for(const auto & i : signs){
        flag = true;
        for (auto j = i.begin()+1; j < i.end(); j++){
            flag &= *j == *(j-1) && *j != EMPTY;
        }
        if(flag){
            break;
        }
    }
    return flag;
}

bool checkColumns(const vector<vector<char>>& signs){
    bool flag;
    for(const auto & i : signs){
        flag = (i[0] == i[1]) && (i[1] == i[2]) && i[0] != EMPTY;
        if(flag){
            break;
        }
    }
    return flag;
}

bool checkDiagonal(const vector<vector<char>>& signs){
    return (signs[0][0] == signs[1][1] && signs[2][2] == signs[1][1] && signs[0][0] != EMPTY)
    || (signs[2][0] == signs[1][1] && signs[0][2] == signs[1][1] && signs[2][0] != EMPTY);
}

bool askPlayerIfWantsToPlayWithComputer(){
    return askPlayerHelper("Do you want to play with the computer? (y/n)");
}

bool doYouWantToStart(){
    return askPlayerHelper("Do you want to start?");
}

bool askPlayerHelper(const string & prompt){
    char answer;
    do{
        cout << prompt;
        cin >> answer;
    } while (answer != 'y' && answer != 'n');
    return answer == 'y';
}

void computerMove(vector<vector<char>>& signs, char activePlayer, char notActive){
    //Should randomize
    if (computerCheckWinning(signs, activePlayer, notActive)) {
        return;
    } else if (signs[1][1] == EMPTY){
        signs[1][1] = activePlayer;
        return;
    } else if (signs[0][0] == EMPTY){
        signs[0][0] = activePlayer;
        return;
    } else if (signs[2][2] == EMPTY){
        signs[2][2] = activePlayer;
        return;
    } else if (signs[0][2] == EMPTY){
        signs[0][2] = activePlayer;
        return;
    } else if (signs[2][0] == EMPTY){
        signs[2][0] = activePlayer;
        return;
    } else if (signs[0][1] == EMPTY){
        signs[0][1] = activePlayer;
        return;
    } else if (signs[1][0] == EMPTY){
        signs[1][0] = activePlayer;
        return;
    } else if (signs[1][3] == EMPTY){
        signs[1][3] = activePlayer;
        return;
    } else if (signs[2][1] == EMPTY){
        signs[2][1] = activePlayer;
        return;
    }
}

bool computerCheckWinning(vector<vector<char>>& signs, char activePlayer, char notActive){
    if(computerRowHelper(signs, activePlayer, activePlayer) || computerColumnHelper(signs, activePlayer, activePlayer) || computerDiagHelper(signs, activePlayer, activePlayer)){
        return true;
    } else
        return computerRowHelper(signs, notActive, activePlayer) ||
               computerColumnHelper(signs, notActive, activePlayer) ||
               computerDiagHelper(signs, notActive, activePlayer);
}

bool computerRowHelper(vector<vector<char>>& signs, char signToWatch, char signToAdd){
    bool added;
    for (auto & i : signs){
        if(i[0] == EMPTY && i[1] == signToWatch && i[2] == signToWatch){
            i[0] = signToAdd;
            added = true;
            break;
        } else if(i[0] == signToWatch && i[1] == EMPTY && i[2] == signToWatch) {
            i[1] = signToAdd;
            added = true;
            break;
        } else if(i[0] == signToWatch && i[1] == signToWatch && i[2] == EMPTY){
            i[2] = signToAdd;
            added = true;
            break;
        }
    }
    return added;
}

bool computerColumnHelper(vector<vector<char>>& signs, char signToWatch, char signToAdd){
    bool added = false;
    for (unsigned int i = 0; i < 3; i++){
        if(signs[0][i] == EMPTY && signs[1][i] == signToWatch && signs[2][i] == signToWatch){
            signs[0][i] = signToAdd;
            added = true;
            break;
        } else if(signs[0][i] == signToWatch && signs[1][i] == EMPTY && signs[2][i] == signToWatch) {
            signs[1][i] = signToAdd;
            added = true;
            break;
        } else if(signs[0][i] == signToWatch && signs[1][i] == signToWatch && signs[2][i] == EMPTY){
            signs[2][i] = signToAdd;
            added = true;
            break;
        }
    }
    return added;
}

bool computerDiagHelper(vector<vector<char>>& signs, char signToWatch, char signToAdd) {
    bool added = false;
    if(signs[0][0] == EMPTY && signs[1][1] == signToWatch && signs[2][2] == signToWatch){
        signs[0][0] = signToAdd;
        added = true;
    } else if(signs[0][0] == signToWatch && signs[1][1] == EMPTY && signs[2][2] == signToWatch) {
        signs[1][1] = signToAdd;
        added = true;
    } else if(signs[0][0] == signToWatch && signs[1][1] == signToWatch && signs[2][2] == EMPTY){
        signs[2][2] = signToAdd;
        added = true;
    } else if(signs[2][0] == EMPTY && signs[1][1] == signToWatch && signs[0][2] == signToWatch){
        signs[2][0] = signToAdd;
        added = true;
    } else if(signs[2][0] == signToWatch && signs[1][1] == EMPTY && signs[0][2] == signToWatch){
        signs[1][1] = signToAdd;
        added = true;
    } else if(signs[2][0] == signToWatch && signs[1][1] == signToWatch && signs[0][2] == EMPTY){
        signs[0][2] = signToAdd;
        added = true;
    }
    return added;
}