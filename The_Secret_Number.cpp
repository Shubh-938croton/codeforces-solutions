#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        vector<long long> results;
        
        long long pow10 = 10; // 
        for(int k = 1; k <= 18; k++){
            long long divisor = pow10 + 1;
            if(divisor > n) break; 
            
            if(n % divisor == 0){
                long long x = n / divisor;
                if(x >= 1){
                    results.push_back(x);
                }
            }
            
            
            if(pow10 > (long long)2e18 / 10) { 
                pow10 = LLONG_MAX; 
            } else {
                pow10 *= 10;
            }
        }
        
        sort(results.begin(), results.end());
        
        cout << results.size();
        for(long long x : results) cout << " " << x;
        cout << "\n";
    }
    
    return 0;
}