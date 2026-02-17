#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
       ll n ; cin >> n;

       vector<ll> a(n);
       for(int i = 0; i<n; i++) cin >> a[i];

       vector<ll> v(0);

       int i = 0, j = n-1;

       while(i<j)
       {
          v.push_back(a[i]);
          v.push_back(a[j]);
        i++;
        j--;

       }

       if(i == j) v.push_back(a[i]);

       for(auto it : v) cout << it << " ";
       cout << endl;

       
    }
    
    return 0;
}
