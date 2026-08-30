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
        int n,k,m;
        cin>>n>>k>>m;
        if(k>m){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        long long x=m-k+1;
        for(int i=0;i<n;i++){
            if(i%k!=0){
                cout<<1;
            }
            else cout<<x;
            if(i!=n){
                cout<<" ";
            }
        }
        cout<<"\n";
        
    }
    return 0;
}
