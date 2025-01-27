#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // DFS function to check if there's a path from src to dest
    bool dfs(unordered_map<int, vector<int>>& adj, int src, int dest, vector<int>& visited) {
        if (src == dest) return true;
        visited[src] = 1; // Mark the current node as visited
        for (auto& adjNode : adj[src]) {
            if (!visited[adjNode]) {
                if (dfs(adj, adjNode, dest, visited)) {
                    return true;
                }
            }
        }
        return false;
    }

    // Function to check if prerequisites are satisfied for all queries
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> adj;
        for (auto& edge : prerequisites) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }

        int Q = queries.size();
        vector<bool> result(Q);

        for (int i = 0; i < Q; i++) {
            int u = queries[i][0];
            int v = queries[i][1];
            vector<int> visited(numCourses, 0); // Reset visited array
            result[i] = dfs(adj, u, v, visited);
        }
        return result;
    }
};

// Main function to execute the solution
int main() {
    Solution solution;
    
    // Input: Number of courses
    int numCourses = 4;
    
    // Input: Prerequisites as pairs of [u, v]
    vector<vector<int>> prerequisites = {{0, 1}, {1, 2}, {2, 3}};
    
    // Input: Queries to check prerequisites
    vector<vector<int>> queries = {{0, 3}, {1, 3}, {3, 0}, {0, 2}, {2, 0}};
    
    // Execute the solution
    vector<bool> result = solution.checkIfPrerequisite(numCourses, prerequisites, queries);
    
    // Output the results
    cout << "Results for each query:" << endl;
    for (bool res : result) {
        cout << (res ? "true" : "false") << endl;
    }

    return 0;
}
