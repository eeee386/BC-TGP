#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int askNumber(const string & prompt = "Please enter a number :\n"){
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

int askNumber(){
    int num;
    cout << "Please enter a number :\n";
    cin >> num;
    return num;
}

int main() {
    return 0;
}

