#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin  >> n;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int pair = n / 2;

        for(int i = 1; i<= pair; i++)
        {
            cout << a[i] << " " << a[0] << endl;
        }
        
    }
    
    return 0;
}
