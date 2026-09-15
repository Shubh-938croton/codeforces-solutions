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
        long long a, b;
        cin >> a >> b;

        auto calc = [&](long long white, long long dark, bool startWhite)
        {
            long long need = 1;
            int layers = 0;
            bool useWhite = startWhite;
            while (true)
            {
                if (useWhite)
                {
                    if (white < need)
                        break;
                    white -= need;
                }
                else
                {
                    if (dark < need)
                        break;
                    dark -= need;
                }
                layers++;
                need *= 2;
                useWhite = !useWhite;
            }
            return layers;
        };

        int ans = max(calc(a, b, true), calc(a, b, false));
        cout << ans << "\n";
    }
    return 0;
}
