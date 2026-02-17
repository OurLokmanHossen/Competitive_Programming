#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int a[n];
        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a, a+n);

        bool possible = true;

        int op = 0;

        for(int i = 0; i<n; i++)
        {

           if(a[i] > i+1)
           {
             possible = false;
             break;
           }

           op += i+1 - a[i];


        }

        if(possible) cout << op << endl;
        else cout << -1 << endl;
  
    }
    
    return 0;
}
