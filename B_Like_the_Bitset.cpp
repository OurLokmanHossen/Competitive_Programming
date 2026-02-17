#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

        string s; cin >> s;

        int cnt1 = 0 ;

        bool imp = false;

        int nval = 1;

        vector<int> a(n);

        for(int i = 0; i<n ; i++) 
        {
            if(s[i] == '1') 
            {
                cnt1++;
                a[i] = nval;
                nval++;

            if(cnt1 >= k) 
            {
                imp = true;
                break;
            }            
        }
        else cnt1 = 0;
            
        }

        if(imp) 
        {
            cout << "NO" << endl;
            continue;
        }

        for(int i = 0; i<n ; i++)
        {
            if(s[i] == '0')
            {
                a[i] = nval;
                nval++;
            }
        }

        cout << "YES" << endl;

        for(int i = 0; i<n; i++)
        {
            cout << a[i] << " " ;
        }

        cout << endl;

        
    }
    
    return 0;
}
