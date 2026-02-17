#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i = 2; i*i <= n; i++)
        {
            if(prime[i])
            {
                for(int j = i*i; j<= n; j+= i)
                {
                    prime[j] = false;
                }
            }
        }

        int sum = 0;

        for(int i = 2; i<= n; i++)
        {
            if(prime[i])
            {
              sum += i;
            }
        }

        cout << sum << endl;
        
    }
    
    return 0;
}
