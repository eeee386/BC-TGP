#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::find;
using std::find_if;
using std::tolower;

void writeMessage(const string &result, const string &guessedLetters, const int &remainingTries) {
    cout << result << "\n";
    cout << "Guessed letters so far: " << guessedLetters << "\n";
    cout << "Remaining tries: " << remainingTries << "\n" << endl;
}

string toLower(string &str) {
    for (auto &c : str) {
        c = tolower(c);
    }
    return str;
};

void hangman() {
    std::locale loc;

    string word;
    int remainingTries = 8;
    char guess;
    string placeholder;
    vector<string> guessedWords;
    string guessedLetters;
    string result(word.size(), '_');

    cout << "Pick a word: \n";
    cin >> word;
    cout << endl;
    word = toLower(word);
    cout << "===================\n";

    while (result != word && remainingTries != 0) {
        writeMessage(result, guessedLetters, remainingTries);
        cout << "Guess a letter or the word: ";
        cin >> placeholder;
        cout << endl;
        placeholder = toLower(placeholder);

        if (placeholder.size() != 1) {
            --remainingTries;
            guessedWords.emplace_back(placeholder);
            if (placeholder == word) {
                result = placeholder;
            }
            continue;
        }

        guess = placeholder[0];
        if (!isalpha(guess)) {
            cout << "This is not a valid guess!" << endl;
            continue;
        }
        --remainingTries;
        for (unsigned int i = 0; i < word.size(); i++) {
            if (word[i] == guess) {
                result[i] = guess;
            }
        }
        guessedLetters.append(" ").push_back(guess);
    }

    writeMessage(result, guessedLetters, remainingTries);

    if (word == result) {
        cout << "Congratulations! You guessed the word!" << endl;
    } else {
        cout << "Game over! The word was: " << word << endl;
    }
}

void gameLibrary() {
    vector<string> games;
    vector<string>::const_iterator iter;
    string answer;
    string title;
    while (true){
        cout << "Choose: list, add, delete or quit: \n";
        cin >> answer;
        cout << endl;
        if (answer == "list") {
            cout << "Listing games: \n\n";
            for (iter = games.begin(); iter != games.end(); iter++) {
                cout << *iter << endl;
            }
        } else if(answer == "add") {
            cout << "\n\nAdd game: ";
            cin >> title;
            games.emplace_back(title);
        } else if (answer == "delete") {
            cout << "\n\nDelete game: ";
            cin >> title;
            iter = find_if(games.begin(), games.end(), [&](const string& i) { return i == title; });
            games.erase(iter);
        } else if(answer == "quit"){
            cout << "\n\nGood-bye";
            break;
        } else {
            cout << "\n\nInvalid input\n\n";
        }
    }
}

int main() {
    gameLibrary();
    return 0;
}
