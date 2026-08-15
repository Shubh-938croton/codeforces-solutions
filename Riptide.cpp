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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b || a == c || b == c)
        {
            cout << "0\n";
        }

        else
        { int largest=max({a,b,c});
            int smallest=min({a,b,c});
            int middle=a+b+c-largest-smallest;
           int leftgap=middle-smallest;
           int rightgap=largest-middle;
            
        cout<<min(leftgap,rightgap)<<"\n";
    }
    
}
return 0;

}

