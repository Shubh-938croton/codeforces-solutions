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
        int y, r;
        cin >> y >> r;
        
        int remaining = n - r;
        int fromYellow = min(y / 2, remaining);
        
        int ans = r + fromYellow;
        cout << ans << "\n";
    }
    
    return 0;
}