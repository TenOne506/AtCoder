#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    // 前缀中 '0' 的个数的奇偶性
    int prefix = 0;
    vector<long long> count(2, 0);  // count[0] 和 count[1]
    count[0] = 1;                   // prefix[0] = 0

    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            prefix ^= 1;  // 奇偶性翻转
        }
        // 当前 prefix 是 prefix[i+1]
        ans += count[prefix];  // 与前面相同奇偶性的位置配对
        count[prefix]++;
    }

    cout << ans << '\n';
    return 0;
}