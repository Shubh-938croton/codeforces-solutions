#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n++;  // size is n+1;
        bool flag=true;

        for(int i=2;i<n;i++){
            if(n%i==0) flag=false; // if the n is divisible by any i less than n it will not be the winner.
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}