#include <bits/stdc++.h>
#include <cstdint>
#include <random>
using namespace std;

mt19937_64 rnd(time(0));

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<pair<int64_t, int64_t>> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    auto check = [&](int i, int j) {
        if (i == j) return false;
        auto [x1, y1] = p[i];
        auto [x2, y2] = p[j];
        int64_t a = y1 - y2;
        int64_t b = x2 - x1;
        int64_t c = -a * x1 - b * y1;
        int cnt = count_if(p.begin(), p.end(), [&](auto& p) {
            return a * p.first + b * p.second + c == 0;
        });
        if (cnt <= n / 2) return false;
        cout << "Yes\n";
        cout << a << " " << b << " " << c << "\n";
        return true;
    };

    int time = 100;
    while (time--) {
        if (check(rnd() % n, rnd() % n)) return 0;
    }
    cout << "No\n";
    return 0;
}