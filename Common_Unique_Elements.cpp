#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, m; cin >> n >> m;

    set<int> A, B;

    for(int i = 0; i< n; i++)
    {
        int x; cin >> x;
        A.insert(x);
    }

    for(int i = 0; i<n ; i++)
    {
        int y; cin >> y;
        if(A.find(y) != A.end())
        {
            B.insert(y);
        }
    }

    for(auto value : B)
    {
        cout << value << " ";
    }

    cout << endl;
    
    return 0;
}
