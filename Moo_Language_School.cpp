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
        string s;
        cin>>s;

        int ans=0;
        int numFarm=n/k;
        
        for(int i=0;i<numFarm;i++){
            int begin=i*k;
            int end=begin+k;

            int cnt1=0;
            for(int j=begin;j<end;j++){
                if(s[j]=='1') cnt1++;
            }
            if(cnt1==k) ans++;
        } 
        cout<<ans<<"\n";
    }
    return 0;
}