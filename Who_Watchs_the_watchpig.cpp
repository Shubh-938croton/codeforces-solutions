#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        if(2*k > n){
            cout<<"-1\n";
            continue;
        }

        int flip=0;
        for(int i=0;i<k;i++){
            if(s[i]=='L') flip++;      // check if start from left if it is l so do it R 
            if(s[n-i-1]=='R') flip++;  // check from the right if R is there do it L
        }

        cout<<flip<<"\n";
    }
return 0;
}
