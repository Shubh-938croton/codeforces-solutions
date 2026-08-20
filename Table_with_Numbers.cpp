#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> a(n);
        int grp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(h>l) swap(h,l);
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(a[i]<=h){
                c1++;
            }
            if(a[i]<=l){
                c2++;
            }
        }
        
        cout<<min(c2/2 ,c1)<<"\n";
    }

}
