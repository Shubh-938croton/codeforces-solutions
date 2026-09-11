#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int l, r, L, R;
        cin >> l >> r;
        cin >> L >> R;
        
        int ov_l = max(l, L);
        int ov_r = min(r, R);
        
        int ans;
        if(ov_l > ov_r){
            // no overlap
            ans = 1;
        } else {
            ans = (ov_r - ov_l);
            if(l != L) ans++;
            if(r != R) ans++;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}