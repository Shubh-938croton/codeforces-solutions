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
        int a;
        cin >> a;

        string s;
        s = to_string(a);
        int n = s.length();

        // Must be at least "10x" (length >= 3)
        if (n <= 2)
        {
            cout << "NO\n";
            continue;
        }

        // Must start with "10"
        if (s[0] == '1' && s[1] == '0')
        {
            string exponent = s.substr(2);

            // Exponent must not be "1" and must not start with '0'
            if (exponent == "1" || exponent[0] == '0')
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}
