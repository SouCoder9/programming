#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;   
    string binary = "";
    while(n > 0){
        binary = (n % 2 == 0) ? '0' + binary : '1' + binary;
        n /= 2;
    }
    cout << binary << endl;
    return 0;

}