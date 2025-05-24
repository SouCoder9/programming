class Solution {
private:
    void function(int idx, int target, vector<int>& ds, vector<int>& arr,
                  vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        
        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1]) continue; // Skip duplicates
            if (arr[i] > target) break; // No need to proceed further
            
            ds.push_back(arr[i]);
            function(i + 1, target - arr[i], ds, arr, ans); // Move to next index (no reuse)
            ds.pop_back(); // Backtrack
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates
        function(0, target, ds, candidates, ans);
        return ans;
    }
};