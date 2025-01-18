#include <iostream>
#include <string>
using namespace std;
int main()
{

    // CHAR ARRAY
    char c[] = {'h', 'e', 'l', 'l', 'o'};
    cout << c;

    char c1[20] = {'h', 'e', 'l', 'l', 'o'};
    cout << c1;

    char c2[] = "hello";
    cout << c2;

    // char c3[2] = "hello";
    // a value of type "const char [6]" cannot be used to initialize an entity of type "char [2]"
    // cout << c3;

    // STRING

    string s;
    cin >> s;
    cout << s.length();
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + s2;
    cout << s3;
    string s4;
    getline(cin, s4);
    s1.push_back('a');
    s2.pop_back();
    cout << s1 << " " << s2 << " " << s3 << " " << s4;

    string s5 = "hello5";
    int pos = s5.back() - '0';
    s5.pop_back();
    cout << pos;
    cout << s5;

    return 0;
}