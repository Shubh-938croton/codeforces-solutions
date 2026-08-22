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
        for(auto&x:a){
            cin>>x;
        }
        
        int cnt=0;
        int ma=a[0];
        for(int i=1;i<n;i++){
           if(a[i]<ma) cnt++;
           else ma=a[i];
        }
        cout<<cnt<<"\n";
        

    }
    return 0;
}