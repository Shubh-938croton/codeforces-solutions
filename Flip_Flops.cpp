// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n,c,k;
//         cin>>n>>c>>k;
//         vector<long long > A(n);
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         sort(A.begin(),A.end());
//         if(c<A[0]){
//                 cout<<c<<"\n";
//             }
//             else{
//         for(int i=0;i<n;i++){
            
//               if(c>=A[i]){
//                 int v=min<long long>(k,c-A[i]);
//                 c+=v;
//                 k-=(c-A[i]);
//             }
//         }
//         cout<<c<<"\n";}
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         long long c, k;
//         cin >> n >> c >> k;

//         vector<long long> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         sort(a.begin(), a.end());

//         for (int i = 0; i < n; i++) {
//             if (a[i] <= c) {
//                 c += a[i];
//             } else {
//                 break;
//             }
//         }

//         cout << c << '\n';
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        ll c;
        cin >> n >> c >> k;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        sort(a, a + n);
        
        for (int i = 0; i < n; ++i) {
            int add = max<ll>(0, min<ll>(k, c - a[i]));
            k -= add;
            a[i] += add;
            if (c >= a[i])
                c += a[i];
        }
        
        cout << c << '\n';
    }
}

