#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n,a , b; cin >> n >> a >> b;
        vector<int> ar(n);
        for(int i = 0; i<n; i++) cin >> ar[i];

        int cnt = 0;
        bool j = false;

        for(int i = 0; i<n; i++)
        {
            if(ar[i] < a && !j) {
                cnt++;
            j = true;
        }

        if(ar[i] > b)
        {
            j = false;
        }
        }

        cout << cnt << endl;
        
    }
    
    return 0;
}
