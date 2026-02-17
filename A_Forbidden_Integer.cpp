#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t; cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) // x > 1
        {
            cout << "YES\n" << n << "\n";
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        }
        else 
        { // x == 1 
            if (k == 1) 
            {
                cout << "NO\n";
            } 
            else if (k == 2) 
            {
                if (n % 2 == 0) 
                {
                    cout << "YES\n" << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++) cout << 2 << " ";
                    cout << "\n";
                } else 
                {
                    cout << "NO\n";
                }
            } 
            else 
            {
              if(n % 2 == 0)
              {
                cout << "YES\n" << n / 2 << "\n";
                for (int i = 0; i < n / 2; i++)
                {
                   cout << 2 << " ";
                } 
                cout << endl;
              }else
              {
                 cout << "YES\n" << n / 2 << "\n";
                for (int i = 0; i < n / 2 - 1; i++)
                {
                   cout << 2 << " ";
                } 
                cout << 3 << "\n";
              }

                
            }
        }
    }
    
    return 0;
}
