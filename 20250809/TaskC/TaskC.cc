#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> bag(n);
    for (int i = 0; i < n; ++i) {
        cin >> bag[i];
    }

    sort(bag.begin(), bag.end());

    vector<long long> presum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        presum[i + 1] = presum[i] + bag[i];
    }

    auto solve = [&](int x) {
        if (bag.back() < x) {
            cout << "-1\n";
            return;
        }
        auto pos = lower_bound(bag.begin(), bag.end(), x);
        int leftsize = pos - bag.begin();
        long long ans = presum[leftsize] + (long long)(x - 1) * (n - leftsize);
        cout << ans + 1 << '\n';
    };

    while (q--) {
        int b;
        cin >> b;
        solve(b);
    }

    return 0;
}