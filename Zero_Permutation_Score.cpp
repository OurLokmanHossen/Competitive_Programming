#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
        int n; cin >> n;
        vector<int> v(n,0);

        int ans = 0;

        for(int i = 0 ; i<n; i++)
        {
            v[i] += 1;
             int z = 0;
            for(int j = 0; j <n-1; j++)
            {
                if(v[j] == 0 && v[j+1] == 0)
                {
                    z++;
                }
            }
            ans += z;
        }

        cout << ans << endl;




    }
    
    return 0;
}
