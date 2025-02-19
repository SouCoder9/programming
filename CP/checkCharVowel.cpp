#include<iostream>
using namespace std;
int main(){
    string s = "AaEeIiOoUu";
    char c;
    cin >> c;
    (s.find(c)!=string::npos) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}