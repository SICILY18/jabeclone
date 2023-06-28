#include <iostream>
#include <stack>
using namespace std;

int findMinReplacements(string str) {
    stack<char> s;
    int replacements = 0;

    for (char c : str) {
        if (c == '{') {
            s.push(c);
        } else {
            if (s.empty()) {
                replacements++;
            } else {
                s.pop();
            }
        }
    }

    replacements += s.size();

    return replacements;
}

int main() {
    string str;
    cout << "Enter a String of braces: ";
    getline(cin, str);
    int replacements = findMinReplacements(str);
    cout << "Minimum Number of replacements required: " << replacements << endl;

    return 0;
}