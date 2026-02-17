#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;

    vector<int> isPrime(n+1, true);

    isPrime[0] = isPrime[1] = false;

    for(int i= 2; i*i <= n; i++)
    {
        if(isPrime[i])
        {
            for(int j = i *i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime 2 to n is : " ;
    for(int i = 2; i<= n; i++)
    {
        if(isPrime[i])
        {
            cout << i << " " ;
        }
    }

    cout << endl;
    
  
    
    return 0;
}
