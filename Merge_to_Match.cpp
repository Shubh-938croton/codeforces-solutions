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
        int n,m;
        cin>>n>>m;

        vector<int>a(n),b(m);
        
        for(int i=0;i<n;i++)  cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(2*m>n){
            cout<<"NO\n";
            continue;
        }
        bool possible=true;

        for(int i=0;i<m;i++){
            if(a[i]>b[i]){
            possible=false;
            break;
            }
        }

        if(possible){
            for(int i=0;i<m;i++){
                if(a[n-m+i]<=b[i]){
                    possible=false;
                    break;
                }
            }
        }
        cout<<(possible ? "YES\n":"NO\n");
   
    }
    return 0;

}
