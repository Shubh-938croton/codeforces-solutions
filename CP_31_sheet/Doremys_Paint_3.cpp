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
        for (auto &x : a)
            cin >> x;

        map<long long, long long> freq;
        for (int x : a)
        {
            freq[x]++;
        }
        if (freq.size() >= 3)
        {
            cout << "No\n";
        }
        else
        {
            long long freq_1 = freq.begin()->second;
            long long freq_2 = freq.rbegin()->second;

            if (freq_1 == freq_2)
                cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}