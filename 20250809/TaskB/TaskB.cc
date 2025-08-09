#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> pre(n + 1);
    for (int i = 0; i < n; ++i) {
        pre[i + 1] = pre[i] + (s[i] == 't');
    }

    vector<int> pos;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 't') { pos.push_back(i); }
    }

    // 如果少于 2 个 't'，无法形成合法子串
    if (pos.size() < 2) {
        cout << fixed << setprecision(10) << 0.0 << endl;
        return 0;
    }

    double ans = -1e9;  // 初始化为极小值

    // 枚举所有以 't' 开头和结尾的子串
    for (int i = 0; i < pos.size(); ++i) {
        for (int j = i + 1; j < pos.size(); ++j) {
            int l = pos[i], r = pos[j];
            int len = r - l + 1;
            if (len <= 2) continue;

            int count_t = pre[r + 1] - pre[l];
            double score = (count_t - 2.0) / (len - 2.0);
            ans = max(ans, score);
        }
    }

    // 如果没找到合法子串（理论上不会，因为 pos.size()>=2）
    if (ans == -1e9) { ans = 0.0; }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}