
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool has2025 = (s.find("2025") != string::npos);      // s.find("2025")!= string :: npos  this means 2025 is present.
        bool has2026 = (s.find("2026") != string::npos);

        if (!has2025 || has2026)  // 2025 not present and 2026 is present.
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }

    return 0;
}
