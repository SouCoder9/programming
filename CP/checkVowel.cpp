#include <iostream>
#include <string>
using namespace std;
bool containsVowel(const string& str) {
    const string vowels = "aeiouAEIOU";
    return str.find_first_of(vowels) != string::npos;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (containsVowel(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}