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

        int c = 0, ac = 0;

        int way = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '1') c++;
            else ac++;

            if(c > ac) way++;
        }

        cout << way << endl;
        
    }
    
    return 0;
}
