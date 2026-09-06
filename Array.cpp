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
        
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++){
            int greater = 0, lesser = 0;
            for(int j = i+1; j < n; j++){
                if(a[j] > a[i]) greater++;
                else if(a[j] < a[i]) lesser++;
            }
            ans[i] = max(greater, lesser);
        }
        
        for(int i = 0; i < n; i++){
            cout << ans[i] << " \n"[i == n-1];
        }
    }
    
    return 0;
}