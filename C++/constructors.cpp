#include <iostream>
#include <vector>

using namespace std;
class Coffee
{
public:
    string Type;
    int Servings;
    vector<string> Ingridients;

    Coffee()
    {
        cout << "constructor called" << endl;
        Type = "coldCoffee";
        Servings = 10;
        Ingridients = {"water", "coffee-powder", "suger", "ice", "milk-powder"};
    }

    void Display()
    {
        cout << "Typye of coffee: " << Type << endl;
        cout << "Number of Servings: " << Servings << endl;
        for (string Ingridient : Ingridients)
        {
            cout << Ingridient << " ";
        }
        cout << endl;
    }
};
int main()
{

    Coffee defaultCoffee;
    defaultCoffee.Display();

    return 0;
}