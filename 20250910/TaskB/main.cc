#include <iostream>
#include <vector>

using namespace std;

bool check(const vector<vector<char>>& grid, int i, int j) {
    int n = static_cast<int>(grid.size());
    int m = static_cast<int>(grid[0].size());
    int count = 0;
    if (i - 1 >= 0 && grid[i - 1][j] == '#') count++;
    if (i + 1 < n && grid[i + 1][j] == '#') count++;
    if (j - 1 >= 0 && grid[i][j - 1] == '#') count++;
    if (j + 1 < m && grid[i][j + 1] == '#') count++;
    if (count == 2 || count == 4) return true;

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    bool ans = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') {
                if (!check(grid, i, j)) {
                    ans = false;
                    goto end;
                    break;
                }
            }
        }
    }
end:
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}