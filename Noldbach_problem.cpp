#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, k; cin >> n >> k;

    int mx = n+1;

    vector<bool> prime(mx, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i*i <= mx; i++)
    {
        if(prime[i])
        {
            for(int j = i *i ; j<= mx; j+= i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> primeNo;

    for(int i = 2; i <= mx; i++)
    {
        if(prime[i]) primeNo.push_back(i);
    }

    int cnt = 0;

    for(int i = 1; i<primeNo.size(); i++)
    {
        int x = primeNo[i] + primeNo[i-1] + 1;
        if(x > n) break;
        if(prime[x]) cnt++;
    }

    if(cnt >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
