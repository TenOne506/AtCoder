#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    int k;
    cin >> n >> k;

    int m = 1 << n;
    vector<int> ans(m, k / m);
    if (k % m) {
        cout << 1 << "\n";
        auto dfs = [&](auto& self, int l, int r, int rem) {
            if (rem == 0) return;
            if (l == r) {
                ans[l]++;
                return;
            }
            int mid = (l + r) >> 1;
            self(self, l, mid, rem / 2);
            self(self, mid + 1, r, rem - (rem / 2));
        };
        dfs(dfs, 0, m - 1, k % m);
    } else {
        cout << 0 << "\n";
    }

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}