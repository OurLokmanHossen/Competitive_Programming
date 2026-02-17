#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;

    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];

    int m; cin >> m;

    int b[m];
    for(int i = 0; i<m; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);


    int x; cin >> x;

    int ind1, ind2;

    int l = 0;
    int r = m-1;
    int dif = INT_MAX;

    while(l < n && r >= 0)
    {
        int sum = a[l] + b[r];

        if(abs(sum - x) < dif)
        {
          ind1 = l;
          ind2 = r;
          dif = abs(sum-x);
        }
        if(sum > x) r--;
        else l++;
    }
    
     cout << a[ind1] << " " << b[ind2] << " = " << a[ind1] + a[ind2] << endl;
    
    
    return 0;
}
