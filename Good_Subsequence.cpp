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


        int min = 0;
        int p = -1;

        for(int i = 0; i<n; i++)
        {
            int cp = a[i] % 2;

            if(cp != p) 
            {
                min++;
                p = cp;
            }
        }

        cout << min << endl;


        
    }
    
    return 0;
}
