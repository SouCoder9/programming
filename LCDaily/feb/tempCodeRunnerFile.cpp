int n = nums.size();
    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        nums[i] = nums[i] - 1;
    }

    unordered_map<int, int> mp;
    mp[nums[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        int countOfNumsi = mp[nums[i]];

        int totalNumsBeforei = i;


        int badpairs = totalNumsBeforei - countOfNumsi;

        count += badpairs;

        mp[nums[i]]++;
    }
    return count;