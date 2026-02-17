#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        string s; cin >> s;

        map<int, int> freq;

        int maxi = 0;

        for(int i = 0; i<n; i++)
        {
            freq[s[i]]++;
            maxi = max(maxi, freq[s[i]]);
        }

        int diff = n - maxi;

        if(maxi >= diff)
        {
            cout << maxi - diff << endl;
        }else{
            if(n % 2 == 1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        
    }
    
    return 0;
}
