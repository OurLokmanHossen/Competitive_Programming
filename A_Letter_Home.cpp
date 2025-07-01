#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    while (t--) 
    {

        int n, s; cin >> n >> s;
        
        vector<int> a(n);
        for(int i = 0; i<n ; i++) cin >> a[i];

        int op1 = abs(s - a[0]) + abs(a[0]-a[n-1]);
        int op2 = abs(s - a[n-1]) + abs(a[n-1]-a[0]);

        cout << min(op1,op2) << endl;

    }

    return 0;
}
