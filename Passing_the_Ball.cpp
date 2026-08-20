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
        int n;
        cin>>n;
        string p;
        cin>>p;
        int cnt=0;
        int pos=p.find('L');  // find the first l and cnt how many R are there and return NO of R +1 for L.
        for(int i=0;i<pos;i++){
            if(p[i]=='R'){
                cnt++;
            }
        }
        cout<<cnt+1<<"\n";
    }
}
