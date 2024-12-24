#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the sum of the first n natural numbers
    unsigned long long total_sum = static_cast<unsigned long long>(n) * (n + 1) / 2;

    // Check if the total sum is divisible by 2
    if (static_cast<unsigned long long>(n) * (n + 1) % 4 != 0) {
        cout << "NO";
    } else {
        // The target sum for each subset
        unsigned long long target_sum = total_sum / 2;

        vector<int> set1, set2;

        // Distribute numbers from 1 to n
        for (int i = n; i >= 1; --i) {
            if (target_sum >= i) {
                set1.push_back(i);
                target_sum -= i;
            } else {
                set2.push_back(i);
            }
        }
        cout<<"YES"<<endl;
        // Output the first set
        cout << set1.size() << endl;
        for (int num : set1) {
            cout << num << " ";
        }
        cout << endl;

        // Output the second set
        cout << set2.size() << endl;
        for (int num : set2) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
