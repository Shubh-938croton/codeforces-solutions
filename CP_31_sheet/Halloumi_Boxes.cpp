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
        bool flag=true;

        if (k==1){
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                flag=false; 
                break;}
                
            }
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
       
    }
    return 0;
}