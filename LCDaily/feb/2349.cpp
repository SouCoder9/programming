
#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

class NumberContainers {
public:
    unordered_map<int, int> idxToNum;
    unordered_map<int, set<int>> numToIdx;
    NumberContainers() {}

    void change(int index, int number) {
        if (idxToNum.count(index)) {
            int prevNum = idxToNum[index];
            numToIdx[prevNum].erase(index);
            if (numToIdx[prevNum].empty()) {
                numToIdx.erase(prevNum);
            }
        }
        idxToNum[index] = number;
        numToIdx[number].insert(index);
    }

    int find(int number) {
        if (numToIdx.count(number)) {
            return *numToIdx[number].begin();
        }
        return -1;
    }
};


int main() {
    NumberContainers nc;
    nc.change(1, 10);
    nc.change(2, 10);
    nc.change(3, 20);
    cout << nc.find(10) << endl; // Output: 1
    cout << nc.find(20) << endl; // Output: 3
    cout << nc.find(30) << endl; // Output: -1
    nc.change(1, 20);
    cout << nc.find(10) << endl; // Output: 2
    cout << nc.find(20) << endl; // Output: 1
    return 0;
}