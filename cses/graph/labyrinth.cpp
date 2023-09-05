#include <bits/stdc++.h>

using namespace std;
int n, m;
char arr[1005][1005];
bool vis[1005][1005];
int previousStep[1005][1005];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
string stepDir = "UDLR";
bool isValid(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '#') {
        return true;
    }
    return false;
}

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.emplace(x, y);
    vis[x][y] = true;

    while (!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int newX = u.first + dx[i];
            int newY = u.second + dy[i];

            if (isValid(newX, newY) && !vis[newX][newY]) {
                vis[newX][newY] = true;
                previousStep[newX][newY] = i;
                q.emplace(newX, newY);
            }
        }
    }
}

int main() {
    cin >> n >> m;

    pair<int, int> start, end;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'A') {
                start = {i, j};
            } else if (arr[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    bfs(start.first, start.second);

    if (vis[end.first][end.second]) {
        cout << "YES\n";
        vector<int> steps;
        pair<int, int> current = end;

        while (current != start) {
            int p = previousStep[current.first][current.second];
            steps.push_back(p);
            current = {current.first - dx[p], current.second - dy[p]};
        }

        reverse(steps.begin(), steps.end());

        cout << steps.size() << '\n';
        for (int i = 0; i < steps.size(); i++) {
            cout << stepDir[steps[i]];
        }
        cout << '\n';
    } else {
        cout << "NO\n";
    }

    return 0;
}
