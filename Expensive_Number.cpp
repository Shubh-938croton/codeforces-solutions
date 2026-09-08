#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m=s.size();
        int ans=m-1; // maxm possible remove the digit 
        int last;
        for(int i=m-1;i>=0;i--){
            if(s[i]!='0'){
                last=i;
                break;
            }
        }
        for(int i=0;i<last;i++){
            if(s[i]=='0') ans--;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}