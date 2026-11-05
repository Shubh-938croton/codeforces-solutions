#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        int mini=INT_MAX;

        for(int i=0;i<n;i++){
            if(abs(a[i])<=mini)
            mini=abs(a[i]);
        }

        cout<<mini<<"\n";
    
    return 0;
}