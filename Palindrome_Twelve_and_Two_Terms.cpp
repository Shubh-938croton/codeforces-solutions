#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n == 10) {
            cout << -1 << '\n';
        }
        else if (n % 12 == 10) {
            cout << 22 << " " << n - 22 << '\n';
        }
        else {
            long long a = n % 12;
            long long b = n - a;

            cout << a << " " << b << '\n';
        }
    }

    return 0;
}