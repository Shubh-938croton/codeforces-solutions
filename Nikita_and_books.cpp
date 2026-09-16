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
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        
        long long prefix = 0;
        bool ok = true;
        
        for(int i = 0; i < n; i++){
            prefix += a[i];
            long long need = (long long)(i+1) * (i+2) / 2; 
            if(prefix < need){
                ok = false;
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    
    return 0;
}