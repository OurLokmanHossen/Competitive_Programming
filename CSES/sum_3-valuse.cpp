#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    ll n, k;  cin >> n >> k;
   
    vector<pair<ll,ll>> a(n);

    for(ll i = 0; i<n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;

    }

    sort(a.begin(), a.end());

    for(int i = 0; i<n ; i++)
    {
        ll l = i + 1;
        ll r = n - 1;

        while( l < r )
        {
        ll s = a[i].first + a[l].first + a[r].first;

            if(s == k) 
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second;
                return 0;
            }
            else if (s > k) r--;
            else l++;


        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
