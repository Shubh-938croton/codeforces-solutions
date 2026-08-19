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
        int a,b,c;
        cin>>a>>b>>c;
        int range_initial=max({a,b,c})-min({a,b,c});
        int sum=a+b+c;
        int mini_I=min({a,b,c});
        mini_I=sum-min({a,b,c});
        int range_final=abs(max({a,b,c})-mini_I);

        cout<<min(range_initial,range_final)<<"\n";
    }
    return 0;
}
