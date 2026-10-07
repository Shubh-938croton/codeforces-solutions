#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x0, y0, R;
        cin >> x0 >> y0 >> R;

        int ansx = INT_MIN, ansy = INT_MIN;
        bool found = false;

        for (int dx = -R; dx <= R && !found; dx++) {
            for (int dy = -R; dy <= R && !found; dy++) {
                if (dx * dx + dy * dy == R * R) {
                    ansx = x0 + dx;
                    ansy = y0 + dy;
                    found = true;
                }
            }
        }

        cout << ansx << " " << ansy << "\n";
    }
    return 0;
}
