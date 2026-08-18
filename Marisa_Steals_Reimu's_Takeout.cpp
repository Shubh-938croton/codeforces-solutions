// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> w(n);
//         int count0=0;
//         int count1=0;
//         int count2=0;
//         for(int i=0;i<n;i++){
//             cin>>w[i];
//             if(w[i]==0){
//                 count0++;
//             }
//             if(w[i]==1){
//                 count1++;
//             }
//             if(w[i]==2){
//                 count2++;
//             }
            
//         }
//         cout<<count0+min(count1,count2)<<" \n";
//     }
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> w(n);

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];

            if (w[i] == 0)
                count0++;

            if (w[i] == 1)
                count1++;

            if (w[i] == 2)
                count2++;

        }
        int ans=count0;
        int x=min(count1,count2);
        count1-=x;
        count2-=x;

        cout << ans+x + count1/3 +count2/3<< "\n";
    }

    return 0;
}