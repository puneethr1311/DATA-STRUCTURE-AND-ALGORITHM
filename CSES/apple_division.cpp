#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

// Recursive function to explore subsets
void findMinDifference(int index, long long currentSum, long long totalSum, vector<int>& weights, long long& minDifference) {
    // Base case: all apples have been considered
    if (index == weights.size()) {
        long long otherSum = totalSum - currentSum;
        long long difference = abs(currentSum - otherSum);
        minDifference = min(minDifference, difference);
        return;
    }

    // Pick the current apple
    findMinDifference(index + 1, currentSum + weights[index], totalSum, weights, minDifference);
    
    // Do not pick the current apple
    findMinDifference(index + 1, currentSum, totalSum, weights, minDifference);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> weights(n);
    long long totalSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
        totalSum += weights[i];
    }

    long long minDifference = LLONG_MAX;
    
    // Start recursive search from index 0 with initial sum 0
    findMinDifference(0, 0, totalSum, weights, minDifference);

    cout << minDifference << endl;
    return 0;
}
