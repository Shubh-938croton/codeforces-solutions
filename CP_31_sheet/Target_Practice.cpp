#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(10);

        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }

        int ans = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {

                if (grid[i][j] == 'X') {
                    int score = 1 + min({i, j, 9 - i, 9 - j});
                    ans += score;
                }

            }
        }

        cout << ans << '\n';
    }

    return 0;
}