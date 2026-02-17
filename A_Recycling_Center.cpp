#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, c; cin >> n >> c;

        vector<int> v(n);

        int temp , minCost = 0;

        for(int i = 0; i<n; i++)
        {
            cin >> temp ;

            if(temp > c) minCost++;
            else v.push_back(temp);
        } 

        sort(v.rbegin(),v.rend());

       
        int mul = 1;

        for(int i = 0; i<n; i++)
        {
            if(v[i] * mul <= c)
            {
                mul = mul * 2;
            }
            else minCost++;
        }

        cout << minCost << endl;
        
    }
    
    return 0;
}
