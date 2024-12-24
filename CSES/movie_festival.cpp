#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

// Function to compare pairs based on their second element (end time)
bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1";
        return 0;
    }

    vector<pair<int, int> > movies(n);

    // Input the start and end times of movies
    for (int i = 0; i < n; i++) {
        cin >> movies[i].first >> movies[i].second;
    }

    // Sort movies by their end time
    sort(movies.begin(), movies.end(), comparePairs);

    int count = 1;  // Count of non-overlapping movies
    int last_end_time = movies[0].second;  // End time of the last selected movie

    // Iterate through the movies to count the maximum number of non-overlapping ones
    for (int i = 1; i < n; i++) {
        if (movies[i].first >= last_end_time) {
            count++;
            last_end_time = movies[i].second;  // Update last_end_time to current movie's end time
        }
    }

    cout << count;

    return 0;
}
