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
        for(auto &x:a) cin>>x;
        
        if(a[0]==1) cout<<"Yes\n";
        else cout<<"No\n";
        
    }
    return 0;
}