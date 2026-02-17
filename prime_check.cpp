#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n, q; cin >> n >> q;

        vector<int> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i = 2; i * i<= n; i++)
        {
            if(prime[i])
            {
                for(int j = i*i; j<= n; j+=i)
                {
                    prime[j] = false;
                }
            }
        }

        while(q--)
        {
            int x; cin >> x;

            if(prime[x]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    
   
    
    return 0;
}
