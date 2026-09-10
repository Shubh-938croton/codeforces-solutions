#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        
        int maxele=*max_element(a.begin(),a.end());
        int cnt=0;

        for(int x:a){
            if(x==maxele){
                cnt++;
            }
        }
        cout<<cnt<<"\n";

    }
    return 0;
}