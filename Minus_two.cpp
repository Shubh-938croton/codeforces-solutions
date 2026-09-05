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
        
        long long oddCount = 0, countA = 0, countB = 0; 
        
        for(int i = 0; i < n; i++){
            long long v;
            cin >> v;
            if(v % 2 != 0){
                oddCount++;
            } else {
                if(v % 4 == 0) countA++;
                else countB++;
            }
        }
        
        long long ans = max({oddCount, countA, countB});
        cout << ans << "\n";
    }
    
    return 0;
}