#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int a[n];
        for(int i = 0; i<n; i++) cin >> a[i];


        for(int i = 0; i<n-1; i++)
        {
            if(a[i] % 2 != a[i+1] % 2)
            {
                found = false;
                break;
            }
        }

        if(found)
        {
            for(auto it : a)
            {
                cout << it << " ";
            }
            cout << endl;
        }

        else{
            sort(a, a+n);
            for(auto it : a)
            {
                cout << it << " ";
            } 
            cout << endl;
        }
    }
    
    return 0;
}
