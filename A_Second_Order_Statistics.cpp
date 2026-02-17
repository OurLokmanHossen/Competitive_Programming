#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int min = v[0];

    for(int i = 1; i<n; i++)
    {
       if(min < v[i])
       {
         cout << v[i] << endl;
         return 0;
       }
    }

    cout << "NO" << endl;
    
    return 0;
}
