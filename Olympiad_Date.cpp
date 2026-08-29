#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // required counts for digits of "01032025"
    int required[10] = {0};
    string date = "01032025";
    for(char c : date) required[c - '0']++;
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int count[10] = {0};
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            count[a[i]]++;
            
            // check if all required digits satisfied
            bool ok = true;
            for(int d = 0; d < 10; d++){
                if(count[d] < required[d]){
                    ok = false;
                    break;
                }
            }
            
            if(ok){
                ans = i + 1; // 1-indexed step
                break;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}