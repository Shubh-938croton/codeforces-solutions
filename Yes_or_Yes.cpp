#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cntY=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y') cntY++;
        }
        if(cntY>=2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
    return 0;
}