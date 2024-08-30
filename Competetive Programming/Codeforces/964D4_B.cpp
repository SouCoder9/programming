#include <iostream>
#include <vector>

using namespace std;

// Function to count Suneet's wins
int soubhadraFunction(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
    
    // Define all possible game setups
    int games[4][2][2] = {
        {{a1, a2}, {b1, b2}},
        {{a1, a2}, {b2, b1}},
        {{a2, a1}, {b1, b2}},
        {{a2, a1}, {b2, b1}}
    };
    
    // Check each game setup
    for (int i = 0; i < 4; ++i) {
        int suneet_score = 0;
        int slavic_score = 0;
        
        // Round 1
        if (games[i][0][0] > games[i][1][0]) {
            suneet_score += 1;
        } else if (games[i][0][0] < games[i][1][0]) {
            slavic_score += 1;
        }
        
        // Round 2
        if (games[i][0][1] > games[i][1][1]) {
            suneet_score += 1;
        } else if (games[i][0][1] < games[i][1][1]) {
            slavic_score += 1;
        }
        
        // Determine if Suneet wins this game
        if (suneet_score > slavic_score) {
            suneet_wins += 1;
        }
    }
    
    return suneet_wins;
}

int main() {
    int t;
    cin >> t;
    
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        results.push_back(soubhadraFunction(a1, a2, b1, b2));
    }
    
    for (const auto& result : results) {
        cout << result << endl;
    }
    
    return 0;
}
