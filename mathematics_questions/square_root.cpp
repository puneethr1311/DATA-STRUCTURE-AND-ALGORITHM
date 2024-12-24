#include <iostream>
#include <cmath>
using namespace std;

float solve(int val, int n) {
    float ans = val;
    float inc = 0.1;

    // Refine the precision to 5 decimal places
    for (int i = 0; i < 5; i++) {
        while ((ans + inc) * (ans + inc) <= n) {
            ans += inc;
        }
        inc /= 10;
    }
    return ans;
}

float square_root(int n) {
    int s = 0, e = n, ans = 0;

    // Binary search for integer part of square root
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long sq = (long long)mid * mid;

        if (sq <= n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    // Refine result for 5 decimal places
    return solve(ans, n);
}

int main() {
    int n;
    cin >> n;

    // Calculate square root of n
    float sr = square_root(n);
    cout << fixed;
    cout.precision(5); // Print with 5 decimal places
    cout << sr << endl;

    return 0;
}
