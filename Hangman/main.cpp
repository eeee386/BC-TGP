#include <iostream>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::find;
using std::tolower;

void writeMessage(const string &result, const string &guessedLetters, const int & remainingTries) {
    cout << result << "\n";
    cout << "Guessed letters so far: " << guessedLetters << "\n";
    cout << "Remaining tries: " << remainingTries << "\n" << endl;
}

string toLower(string &str){
    for(auto& c : str)
    {
        c = tolower(c);
    }
    return str;
};

int main() {
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

    return 0;
}
