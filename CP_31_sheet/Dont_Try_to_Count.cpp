#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        
        int ope = 0;
        bool found = false;
        
        while (ope <= 5) {
            if (x.find(s) != string::npos) {
                cout << ope << "\n";
                found = true;
                break; 
            }
            x += x;
            ope++;
        }
        
        if (!found) {
            cout << "-1\n";
        }
    }
    return 0;
}

