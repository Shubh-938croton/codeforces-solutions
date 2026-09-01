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

        string vowels = "aeiou";
        int q = n / 5;
        int r = n % 5;

        string result = "";
        for (int i = 0; i < 5; i++)
        {
            int cnt = q + (i < r ? 1 : 0);
            result += string(cnt, vowels[i]);
        }

        cout << result << "\n";
    }

    return 0;

}
