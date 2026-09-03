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
        for(auto &x : a) cin>>x;
        bool flag=true;
        for(int i=0;i<n;i+=2){
            if(a[0]%2==0 ){   // first element is even 
                if(a[i]%2!=0) flag=false; // if any occur odd then false
            }
            if(a[0]%2!=0){ // first element is odd
                if(a[i]%2==0) flag= false;  // if any occur even then false
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}