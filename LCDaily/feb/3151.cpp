#include <iostream>
#include <vector>
using namespace std;
bool isArraySpecial(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); ++i)
        if (!((nums[i] ^ nums[i - 1]) & 1))
            return false;
    return true;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5}; // Example input
    if (isArraySpecial(nums))
    {
        cout << "The array is special." << endl;
    }
    else
    {
        cout << "The array is not special." << endl;
    }
    return 0;
}