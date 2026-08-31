// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;

//         bool onlytake1=false; bool onlytake2=false;
//         for(int i=0;i<n-1;i++){
//             if(s[i]!=s[i-1]  && s[i]!=s[i+1]){
//                 if(s[i-1]==s[i+1]) onlytake2=true;
//                 else onlytake1=true;
//             }
//         }

//         int ans=1;
//         for(int i=1;i<n;i++){
//             if(s[i]!=s[i-1]) ans++;
//         }
//         int x= onlytake2 ? 2 : (onlytake1 ? 1:0);
//         ans-=x;
//         cout<<ans<<"\n";

//     }
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // build runs
        vector<char> ch;
        vector<int> len;
        int i = 0;
        while(i < n){
            int j = i;
            while(j < n && s[j] == s[i]) j++;
            ch.push_back(s[i]);
            len.push_back(j - i);
            i = j;
        }
        
        int k = ch.size();
        
        if(k <= 2){
            cout << k << "\n";
            continue;
        }
        
        bool foundMatch = false, foundAny = false;
        for(int idx = 1; idx <= k-2; idx++){ // middle runs (0-indexed: 1..k-2)
            if(len[idx] == 1){
                foundAny = true;
                if(ch[idx-1] == ch[idx+1]){
                    foundMatch = true;
                    break;
                }
            }
        }
        
        if(foundMatch) cout << (k - 2) << "\n";
        else if(foundAny) cout << (k - 1) << "\n";
        else cout << k << "\n";
    }
    
    return 0;
}