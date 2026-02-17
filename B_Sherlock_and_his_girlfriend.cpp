#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;

    vector<bool> prime(n+2, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i*i <= n+1; i++)
    {
        if(prime[i])
        {
            for(int j = i*i; j<=n+1; j+=i)
            {
                prime[j] = false;
            }
        }
    }
 if(n <= 2) cout << 1 << endl;
 else 
 {
      cout << 2 << endl;
 }
    

    for(int i = 2; i<= n+1; i++)
    {
        if(prime[i])
        { 
            cout << 1 << " ";
        } else cout << 2 << " ";
    }

    cout << endl;
   

    return 0;
}
