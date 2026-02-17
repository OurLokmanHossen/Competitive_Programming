#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int m,n; cin >> m >> n;

        for(int num = m; num <= n; num++)
        {
            if(num < 2) continue;

             bool found = true;

            for(int i = 2; i*i <= num ; i++)
            {
                if(num % i == 0) 
                {
                    found = false;
                    break;
                }
            }

            if(found) cout << num << " ";
            else cout << "Absent" << endl;
        }
        cout << endl;
        
    }
    
    return 0;
}
