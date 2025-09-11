#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
using namespace std;
using i64 = int64_t;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<int> W(n);
    for (auto& x : W)
        cin >> x;
    vector<vector<int>> g(n);
    while (m--) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<unordered_map<i64, i64>> dp(n);
    dp[0][W[0]] = 0;
    using T = tuple<i64, int, i64>;
    priority_queue<T, vector<T>, greater<T>> pq;
    pq.emplace(0, 0, W[0]);
    while (!pq.empty()) {
        auto [val, u, w] = pq.top();
        pq.pop();
        for (auto v : g[u]) {
            i64 nval = val + w;
            i64 nw = w + W[v];
            bool better = find_if(dp[v].begin(), dp[v].end(), [&](auto& p) {
                              return p.first <= nw && p.second <= nval;
                          }) != dp[v].end();
            if (better) continue;  // 已经有更优的状态
            dp[v][nw] = nval;
            pq.emplace(nval, v, nw);
        }
    }
    for (int i = 0; i < n; i++) {
        i64 mi = LLONG_MAX;
        for (auto [w, val] : dp[i]) {
            mi = min(mi, val);
        }
        cout << mi << '\n';
    }
}
