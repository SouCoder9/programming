class Solution {
private:
    void function(int idx, int target, vector<int>& arr,
                  vector<vector<int>>& ans, vector<int>& ds) {
        if (idx == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        
        // Pick the element
        if (arr[idx] <= target) {
            ds.push_back(arr[idx]);
            function(idx, target - arr[idx], arr, ans, ds); // stay on same index as we can reuse
            ds.pop_back();
        }
        
        // Not pick the element
        function(idx + 1, target, arr, ans, ds); // move to next index
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        function(0, target, candidates, ans, ds);
        return ans;
    }
};