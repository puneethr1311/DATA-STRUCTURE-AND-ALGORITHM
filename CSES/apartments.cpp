#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n; // number of applicants
    cin >> n;
    int m; // number of rooms
    cin >> m;
    int k; // maximum difference
    cin >> k;

    vector<int> desired(n);
    for (int i = 0; i < n; i++) {
        cin >> desired[i];
    }

    multiset<int> rooms;
    for (int i = 0; i < m; i++) {
        int room_size;
        cin >> room_size;
        rooms.insert(room_size);
    }

    sort(desired.begin(), desired.end());

    int count = 0;
    for (int i = 0; i < n; i++) {
        int val = desired[i];

        // Find the first room in the range [val - k, val + k]
        auto it = rooms.lower_bound(val - k);

        if (it != rooms.end() && *it <= val + k) {
            count++;
            rooms.erase(it); // remove the matched room
        }
    }

    cout << count << endl;

    return 0;
}
