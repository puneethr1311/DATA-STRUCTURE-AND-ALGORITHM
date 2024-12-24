#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int row[] = {-1, 0, 1, 0}; // Directions: U, R, D, L
int col[] = {0, 1, 0, -1};
char path[] = {'U', 'R', 'D', 'L'};

bool is_valid(int x, int y, int m, int n, vector<vector<char> > &rooms, vector<vector<bool> > &visited) {
    return x >= 0 && x < m && y >= 0 && y < n && rooms[x][y] != '#' && !visited[x][y];
}

void find_path_bfs(vector<vector<char>> &rooms, int m, int n, int sr, int sc, int dr, int dc) {
    queue<pair<int, int>> q;
    vector<vector<int> > parent_dir(m, vector<int>(n, -1)); 
    vector<vector<bool> > visited(m, vector<bool>(n, false));

    q.push({sr, sc});
    visited[sr][sc] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == dr && y == dc) {
            string result;
            while (x != sr || y != sc) {
                int d = parent_dir[x][y];
                result += path[d];
                x -= row[d];
                y -= col[d];
            }
            reverse(result.begin(), result.end());
            cout << "YES" << endl;
            cout << result.size() << endl;
            cout << result << endl;
            return;
        }

        for (int d = 0; d < 4; d++) {
            int nx = x + row[d];
            int ny = y + col[d];

            if (is_valid(nx, ny, m, n, rooms, visited)) {
                visited[nx][ny] = true;
                parent_dir[nx][ny] = d;
                q.push({nx, ny});
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char> > rooms(m, vector<char>(n));
    int sr = -1, sc = -1, dr = -1, dc = -1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> rooms[i][j];
            if (rooms[i][j] == 'A') {
                sr = i;
                sc = j;
            } else if (rooms[i][j] == 'B') {
                dr = i;
                dc = j;
            }
        }
    }

    if (sr == -1 || sc == -1 || dr == -1 || dc == -1) {
        cout << "NO" << endl;
        return 0;
    }

    find_path_bfs(rooms, m, n, sr, sc, dr, dc);
    return 0;
}
