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
        
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        vector<int> freq(101, 0);
        bool ok = false;
        
        for(int i = 0; i < n; i++){
            freq[a[i]]++;
            if(freq[a[i]] >= 2){
                ok = true;
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    
    return 0;
}