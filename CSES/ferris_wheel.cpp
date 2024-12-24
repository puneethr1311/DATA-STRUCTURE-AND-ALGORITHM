#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; // number of children
    int x;
    cin >> x; // maximum weight in one gondola

    vector<int> weights(n); // weights of children
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());

    int i = 0;
    int j = n - 1;
    int gondola = 0;

    while (i <= j) {
        if (weights[i] + weights[j] <= x) {
            i++;
        }
        j--;
        gondola++;
    }
    
    cout << gondola;
    return 0;
}
