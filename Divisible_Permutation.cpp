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
        
        vector<int> p(n+1);
        int lo = 1, hi = n;
        bool takeHigh = true;
        
        for(int i = n; i >= 1; i--){
            if(takeHigh){
                p[i] = hi--;
            } else {
                p[i] = lo++;
            }
            takeHigh = !takeHigh;
        }
        
        for(int i = 1; i <= n; i++){
            cout << p[i] << " \n"[i == n];
        }
    }
    
    return 0;
}