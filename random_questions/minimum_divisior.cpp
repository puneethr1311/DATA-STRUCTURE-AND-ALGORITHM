#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 


int tryit(int val, int n, vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] / val;
        if (arr[i] % val != 0) {
            sum += 1; 
        }
    }
    return sum;
}


int solve(int n, vector<int>& arr, int threshold) {
    int left = 1;
    int right = *max_element(arr.begin(), arr.end()); 
    int ans = right;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (tryit(mid, n, arr) <= threshold) {
            ans = min(ans, mid);
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() { 
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int threshold;
    cin >> threshold;
    
    cout << solve(n, arr, threshold) << endl;
    
    return 0;
}
