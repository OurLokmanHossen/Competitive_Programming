#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n, k; cin >> n >> k;

    map <ll, ll> mp;

    for(int i = 0; i<n; i++)
    {
        int x; cin >> x;
        if(mp.count(x) == 0)
        {
            mp[x] = i+1;
        }
    }

    if(mp.size() < k)
    {
        cout << "NO" << endl;
    }

    else
    {
        cout << "YES" << endl;
        for(auto x : mp)
        {
            if(k>0)
            {
              cout << x.second << " " ;
              k--;
            }
        }
    cout << endl;
    }
   

    return 0;
}