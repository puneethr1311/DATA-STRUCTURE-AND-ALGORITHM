#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

// Global variable to track the maximum of all negative numbers
long long mini = LLONG_MIN; // Correcting from INT_MIN to LLONG_MIN

// Function to check if all elements are negative
bool check_all_negative(int n, vector<long long>& arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) return false; // Return false if any positive number is found
        mini = max(mini, arr[i]); // Update mini with the maximum negative number
    }
    return true;
}

int main() {
    int n;
    cin >> n; // Input the number of elements
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }
    
    long long curr = 0; // Initialize current subarray sum
    long long ans = LLONG_MIN; // Correcting from INT_MIN to LLONG_MIN for the answer
    
    for (int i = 0; i < n; i++) {
        curr += arr[i]; // Add the current element to the current sum
        if (curr < 0) curr = 0; // Reset current sum if it becomes negative
        ans = max(ans, curr); // Update maximum subarray sum found so far
    }
    
    if (check_all_negative(n, arr) == false) {
        cout << ans; // Output the maximum subarray sum if not all elements are negative
    } else {
        cout << mini; // Output the maximum single element if all are negative
    }

    return 0;
}
