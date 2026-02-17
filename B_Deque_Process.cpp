#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> v(n);

        for(int i = 0; i<n; i++) cin >> v[i];

        string ans = "";

        int l = 0, r = n-1;

        for(int turn = 1; turn <= n; turn++)
        {
            if(turn % 2 == 1) 
            {
                if(v[l] < v[r]) 
                {
                    ans += 'L';
                    l++;
                }
                else 
                {
                    ans += 'R';
                    r--;
                }
            }

            else
            {
                if(v[l]> v[r]) 
                {
                    ans += 'L';
                    l++;
                }
                else 
                {
                    ans += 'R';
                    r--;
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
