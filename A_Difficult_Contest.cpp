#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        string s; cin >> s;

        int n = s.size();

        // "FFT" or "NTT"
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());

        cout << s << endl; 
        
    }
    
    return 0;
}
