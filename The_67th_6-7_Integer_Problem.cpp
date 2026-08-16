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
        int a1,a2,a3,a4,a5,a6,a7;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
        int maxi=max({a1,a2,a3,a4,a5,a6,a7});
        cout<<-a1-a2-a3-a4-a5-a6-a7+2*maxi<<"\n";   // negate the all except largest 
    }
    return 0;
}
