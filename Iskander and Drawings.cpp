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

        int currlen = 0;
        int maxlen = 0;

        for (char z : s)
        {
            if (z == '#')
            {
                currlen++;
                maxlen = max(maxlen, currlen);
            }
            else
            {
                currlen = 0;
            }
        }

        cout << (maxlen + 1) / 2 << "\n";
    }

    return 0;
}
