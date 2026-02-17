#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        map<int, int> freq;

        for (int i = 0; i < n; i++) 
        {
            int x; cin >> x;
            freq[x]++;
        }

        int ans = 0;

        for(auto it : freq)
        {
            int val = it.first;
            int cnt = it.second;

            if(cnt >= val) ans += (cnt - val);
            else ans += cnt;
        }


        cout << ans << endl;

        

       
        
    }
    
    return 0;
}
