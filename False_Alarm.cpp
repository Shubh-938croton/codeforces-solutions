#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        int last=-1;
        int first=-1;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(first==-1 && x==1){
                first=i;
            }
            if(x==1){
                last=i;
            }
        }

        if (first==-1  || last-first+1<=x){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }
    return 0;
}