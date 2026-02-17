#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;
    int a[n];

    for(int i = 0; i<n; i++) cin >> a[i];

    int cnt = 1;

    int maxi = 1;

    for(int i = 0; i<n-1 ; i++)
    {
       if(a[i+1] >= a[i])
       {
        cnt += 1;    
       } else 
       {
        cnt = 1;
       }
         maxi = max(maxi, cnt);

    }

    cout << maxi << endl;
    
    return 0;
}
