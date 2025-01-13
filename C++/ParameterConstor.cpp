#include <iostream>
#include <vector>

using namespace std;
class Coffee
{
public:
    string Type;
    int Servings;
    vector<string> Ingridients;

    Coffee(string name,int qty,vector<string>ing)//default constructor with parameters....
    {
        cout << "constructor called" << endl;
        Type = name;
        Servings = qty;
        Ingridients = ing;
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

    Coffee defaultCoffee({"coldcoffee",10,{"water,", "coffee-powder,", "suger,", "ice,", "milk-powder."}});//passing args to the parameters
    defaultCoffee.Display();

    return 0;
}