#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        for(auto &x:a) cin>>x;

        bool found=false;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                found=true;
                break;
            }
        }
        if(found) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}