#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool flag=true;
        for(int i=1;i<n+1;i++){
            cin>>a[i];

            if(a[i]==i || a[i]!=i*2){
                flag=false;
            }
           
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;

}