#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n + 1);
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source = 1;
    int destination = n;

    vector<int> dist(n + 1, INT_MAX);
    vector<int> parent(n + 1, -1);

    queue<int> q;
    q.push(source); // Fix: Push the source into the queue
    dist[source] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (auto it : adj[node]) {
            if (dist[node] + 1 < dist[it]) {
                dist[it] = dist[node] + 1;
                parent[it] = node;
                q.push(it);
            }
        }
    }

    if (dist[destination] == INT_MAX) {
        cout << "IMPOSSIBLE";
    } else {
        cout << dist[destination] + 1 << endl; // Fix: +1 to include the source node in the path length
        // Find path
        vector<int> path;
        for (int curr = destination; curr != -1; curr = parent[curr]) {
            path.push_back(curr);
        }
        reverse(path.begin(), path.end()); // Fix: Use reverse for simplicity
        for (int node : path) {
            cout << node << " ";
        }
    }

    return 0;
}
