#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; // number of tickets
    cin >> n;
    int m; // number of customers
    cin >> m;

    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    vector<int> cp(m);
    for (int i = 0; i < m; i++) {
        cin >> cp[i];
    }

    // Sort the ticket prices
    sort(price.begin(), price.end());

    for (int i = 0; i < m; i++) {
        int val = cp[i];

        // Find the upper bound of the value (first element greater than val)
        auto it = upper_bound(price.begin(), price.end(), val);

        // Move the iterator back if possible to get the largest ticket ≤ val
        if (it != price.begin()) {
            --it; // Decrement to find largest element <= val
            cout << *it << endl;
            price.erase(it); // Erase the found ticket
        } else {
            cout << "-1" << endl; // No suitable ticket found
        }
    }

    return 0;
}
