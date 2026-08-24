#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        if((a<x)== (a<y)){ // x and y should be same side of a.
            cout<<"YES\n";

        }
        else cout<<"NO\n";
    }
    return 0;
}