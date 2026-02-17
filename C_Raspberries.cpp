#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;
        int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        int op = INT_MAX;
        int even_count = 0;

        for(int i = 0; i<n; i++)
        {
            if(a[i] % k == 0) op = 0;
            else op = min(op, k - (a[i] %  k));

            if(a[i] % 2 == 0) even_count++;
        }

       if(k == 4)
       {
             if(even_count >= 2) op = 0;
             else if(even_count == 1) op = min(op, 1);
             else if(even_count == 0) op = min(op, 2);
       }


        cout << op << endl;
        
    }
    
    return 0;
}
