#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, m; cin >> n >> m;

    set<int> setA, setB;

    for(int i = 0; i<n ; i++)
    {
        int x; cin >> x;
        setA.insert(x);
    }

    bool found = true;

    for(int i = 0; i<m ; i++)
    {
        int x; cin >> x;

        if(setA.find(x) == setA.end())
        {
            found = false;
           
        }
        
    }

    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
