#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, m; cin >> n >> m;

    int min_moves =( n+1)/ 2;

    int ans = -1 ;

    for(int i = min_moves; i<= n; i++)
    {
        if( i % m == 0)
        {
           ans = i;
           break;
        }
    }

    cout << ans << endl;



    

    return 0;
}
