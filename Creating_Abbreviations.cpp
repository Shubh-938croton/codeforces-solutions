#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vector<string> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        
        vector<int> mp(26, 0);
        for(auto &x : a){
            mp[x.front() - 'a'] += 1;
        }
        
        vector<bool> done(m, false);
        int doneCount = 0;
        
        bool changed = true;
        while(changed && doneCount < m){
            changed = false;
            
            for(int i = 0; i < m; i++){
                if(done[i]) continue;
                
                bool ok = true;
                for(auto &y : b[i]){
                    ok &= (mp[y - 'A'] > 0);
                }
                
                if(ok){
                    done[i] = true;
                    doneCount++;
                    mp[b[i].front() - 'A'] += 1;
                    changed = true;
                }
            }
        }
        
        cout << (doneCount == m ? "YES" : "NO") << "\n";
    }
    
    return 0;
}