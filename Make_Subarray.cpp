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

        int f = -1 , l = -1;

        for(int i = 0; i<n; i++) 
        {
            if(s[i] =='1') 
            {
                f = i;
                break;
            }
        }

         for(int i = n-1; i>=0; i--) 
        {
            if(s[i] == '1') 
            {
                l = i;
                break;
            }
        }

        int cnt = 0;

         for(int i = f; i <= l; i++) 
        {
            if(s[i] == '0') 
            {
                cnt++;
            }
        }

        cout << cnt << endl;
        
    }
    
    return 0;
}
