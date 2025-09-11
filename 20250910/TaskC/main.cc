#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int left = 0;
        int right = min(a, c);
        int all = a + b + c;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (all - mid * 2 >= mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << right << endl;
    }
}