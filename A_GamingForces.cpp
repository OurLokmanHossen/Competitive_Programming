#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        int cntOne = 0;

        for(int i = 0; i<n ; i++)
        {
            if(a[i] == 1) cntOne++;
        }

        //cntOne/ 2 = number of pair

        cout << n - cntOne/2 << endl;

        
    }
    
    return 0;
}
