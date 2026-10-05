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
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        int maxcap=a[0];

        if (n==1){
            cout<<max(a[0],2*(x-a[0]))<<"\n";
        }
        else{
            for(int i=0;i<n-1;i++){
                maxcap=max(maxcap,a[i+1]-a[i]);
            }
            maxcap=max(maxcap,2*(x-a[n-1]));

            cout<<maxcap<<"\n";
        }


    }
    return 0;
}
