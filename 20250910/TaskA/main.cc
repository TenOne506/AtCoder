#include <iostream>
using namespace std;

int main() {
    int N, M;
    char dash;
    cin >> N >> dash >> M;  // 读取数字、字符'-'、数字

    auto second = (M + 1) % 8;
    auto carry = (M + 1) / 8;
    auto first = N + carry;
    if (N == 8 && carry == 1) { first = 8; }
    cout << first << dash << second << "\n";
    return 0;
}