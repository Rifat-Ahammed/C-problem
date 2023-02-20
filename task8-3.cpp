#include <string>
#include <iostream>
#include <stack>
#include <cctype>
#include <queue>
using namespace std;
bool Check_letter(char symbol) {
    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
    {
        return true;
    }
    else {
         return false; 
        }
}

int main() {
    string entered_text = "";
    stack <char> letters;
    getline(cin, entered_text);
    for (int i = 0; i < entered_text.length(); i++) {
        letters.push(entered_text[i]);
    }
    queue <char> letters_copy;
    stack <char> letters_backwards;
    while (!letters.empty()) {
        cout << letters.top();
        if (Check_letter(letters.top())) {
            letters_backwards.push(char(toupper(letters.top())));
            letters_copy.push(char(toupper(letters.top())));
        }
        letters.pop();
    }
    cout << "\n";
    while (!letters_backwards.empty()) {
        if (letters_backwards.top() == letters_copy.front()) {
            letters_backwards.pop();
            letters_copy.pop();
        }
        else { 
            cout << "Sentence is NOT a palindrom";
            return 0; }
    }
    cout << "Sentence is a palindrom";


    return 0;
}