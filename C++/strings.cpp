#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence = "Hello I am Soubhadra Bhattacharya\nI love coffee\t i am a \t \"c++ Programmer\"";
    cout << sentence << endl;
    cout << "Enter a series name what you like the most\n";

    string seriesName;
    getline(cin, seriesName);

    cout << "My favorite Series is\t" << seriesName << endl;
    return 0;
}