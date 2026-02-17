#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];

    sort(a,a+n);

    int x; cin >> x;

    int i = 0, j = n-1;

    bool found = false;

    while(i<j)
    {

        int sum = a[i] + a[j];
       if(sum == x){found = true; break;} 
       else if(sum> x) j--;
       else i++;
    }

    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;

    
    return 0;
}
