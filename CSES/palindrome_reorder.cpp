#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> count(26, 0);
    int n = s.size();

    // Count the frequency of each character
    for (int i = 0; i < n; i++) {
        count[s[i] - 'A']++;
    }

    int odd_count = 0;
    int odd_index = -1;

    // Find characters with odd counts
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            odd_index = i;
            odd_count++;
        }
        if (odd_count > 1) {
            break;
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION";
    } else {
        string first = "";
        string second = "";

        // Construct the first and second halves of the palindrome
        for (int i = 0; i < 26; i++) {
            if (i != odd_index) {
                int j = count[i] / 2;
                first.append(j, 'A' + i);
                second.append(j, 'A' + i);
            }
        }

        // Add the odd character in the middle, if any
        if (odd_index != -1) {
            first.append(count[odd_index], 'A' + odd_index);
        }

        // Reverse the second half and concatenate with the first half
        reverse(second.begin(), second.end());
        first += second;

        // Print the palindrome
        cout << first;
    }

    return 0;
}
