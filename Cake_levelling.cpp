#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(auto &x : arr) cin>>x;
        long long  ans=INT_MAX;
        long long sum=0;
        for(int i=1;i<n+1;i++){
            sum+=arr[i-1];
            ans=min(ans,(sum/(i)));
            cout<<ans<<" ";
        }

        cout<<"\n";
        
    }
    return 0;
}