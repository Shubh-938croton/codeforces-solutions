#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;              // the condition satisfy for all natural value;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<i;
            if(i<n) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
