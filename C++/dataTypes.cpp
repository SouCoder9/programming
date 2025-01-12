// there are three types of data in c++
// primitive data types
// derived or reference data types
// userdefined data types

// primitives are int char foat bool double long void short
// derived data types are functions pointers references
// userdefined data types are class struct enum unions typtedef etc

#include <iostream>
using namespace std;
int main()
{
    int count = 10;
    float percentage = 45.912334743533456;
    double percentage2 = 45.912334743533456;
    char grade = 'A';
    bool isPassed = true;
    long int count1 = 10000000000000;
    long long int count4 = 10000000000000;
    short int count3 = 10000;
    // if you want that only the positive values then use unsigned int
    unsigned int count2 = -10;

    cout << count << endl;
    cout << percentage2 << endl;
    cout << percentage << endl;
    cout << grade << endl;
    cout << isPassed << endl;
    cout << sizeof(count) << endl;
    cout << sizeof(percentage) << endl;
    cout << sizeof(grade) << endl;
    cout << sizeof(isPassed) << endl;
    cout << count1 << endl;
    cout << sizeof(count1) << endl;
    cout << count2 << endl;
    cout << count3 << endl;
    cout << sizeof(count3) << endl;

//type casting
float num = 49.90;
int num1 = (int)num;
cout << num1 << endl;

    return 0;
}