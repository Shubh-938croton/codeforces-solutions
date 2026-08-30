#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(auto &x: a) cin>>x;

       int minodd=0;
       int maxeven=0;
       for(int i=0;i<n;i++){
        if(minodd>a[i] && a[i]%2!=0){
            minodd=a[i];
        }
        if(maxeven<a[i] && a[i]%2==0){
            maxeven=a[i];
        }
       }
       int cnt1=0;
       if(minodd >0){
        for(int i=0;i<n;i++){
            if(a[i]>=minodd){cnt1++;
            if(a[i]%minodd==0){
                cnt1++;
            }
        }
            
        }
       }
       int cnt2=0
       if(maxeven>0){

       }


        
    }
    return 0;
}