#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n, 0);
    dp[0] = 1;
    for (auto v : {a, b, c}) {
        for (int i = 0; i < n; i++) {
            dp[i + v] += dp[i];
            dp[i + v] %= 998244353;
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}