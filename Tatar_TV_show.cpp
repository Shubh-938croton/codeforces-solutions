// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         bool flag = true;
//         for (int i = 0; i < n - k; i++)
//         {
//             if (s[i] == '1')
//             {
//                 if (s[i] == s[i + k])
//                 {
//                     flag = true;
//                 }

//                 else
//                     flag = false;
//             }
//         }
//         if (flag)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool possible = true;

        for (int mod = 0; mod < k; mod++)
        {
            int cntOne = 0;
            for (int i = mod; i < n; i += k)
            {
                if (s[i] == '1')
                    cntOne++;
            }
            if (cntOne % 2 != 0)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}
