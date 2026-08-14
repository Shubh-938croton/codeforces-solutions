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

        vector<int> a(n);
        map<int, int> freq;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];
            freq[a[i]]++;
        }

        int value = 0;
        int mx = 0;

        
        for (auto p : freq)
        {
            int x = p.first;
            int f = p.second;

            if (f > mx)
            {
                mx = f;
                value = x;
            }
        }

        int others = n - mx;

        
        if (mx <= others + 1)
        {
            cout << sum << '\n';
        }
        else
        {
            
            int sumOthers = sum - value * mx;

            int ans = sumOthers + value * (others + 2);

            cout << ans << '\n';
        }
    }

    return 0;
}