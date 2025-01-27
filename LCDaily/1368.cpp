#include <iostream>
#include <vector>
#include <set>
#include <tuple>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};

    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        set<tuple<int, int, int>> pq; // Set to store {cost, x, y}
        pq.insert({0, 0, 0});

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[0][0] = 0;

        while (!pq.empty()) {
            auto [cost, x, y] = *(pq.begin());
            pq.erase(pq.begin());
            if (x == n - 1 && y == m - 1) {
                return cost;
            }
            int direction = grid[x][y];
            for (int i = 1; i <= 4; i++) {
                int nx = x + dx[i - 1];
                int ny = y + dy[i - 1];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                    int newCost = cost + !(direction == i);
                    if (newCost < dist[nx][ny]) {
                        pq.erase({dist[nx][ny], nx, ny});
                        dist[nx][ny] = newCost;
                        pq.insert({newCost, nx, ny});
                    }
                }
            }
        }
        return 0;
    }
};

// Main function for testing
int main() {
    Solution solution;

    // Test input
    vector<vector<int>> grid = {
        {1, 1, 3},
        {3, 2, 2},
        {1, 1, 4}
    };

    // Run the solution
    int result = solution.minCost(grid);

    // Output the result
    cout << "Minimum cost to make at least one valid path: " << result << endl;

    return 0;
}
