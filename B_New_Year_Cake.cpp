#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b; cin >> a >> b;
        int size = 1, cnt = 0;

        int first = 0, last = 0, n = 0;

        while(true)
        {
            if(n % 2 == 0 ) first += size;
            else last += size;

            if(first <= a && last <= b || first <= b && last <= a)
            {
                cnt++;
            }
            else 
            {
                break;
            }
          size *= 2;
          n++;
        }

        cout << cnt << endl;



        
    }
    
    return 0;
}
