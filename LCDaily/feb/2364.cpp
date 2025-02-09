#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long countBadPairs(vector<int> &nums)
{
    int n = nums.size();
    long long count = 0;

    unordered_map<int, int> mp;
    mp[nums[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        int countOfNumsi = mp[nums[i]-i];

        int totalNumsBeforei = i;


        int badpairs = totalNumsBeforei - countOfNumsi;

        count += badpairs;

        mp[nums[i]-i]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {4, 1, 3, 3};
    cout << countBadPairs(nums) << endl; // Output: 0
    return 0;
}