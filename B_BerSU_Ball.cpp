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

    int cnt = 0;

    int i = 0, j = 0;
    while(i<n && j < m)
    {
        if(abs(a[i]- b[j]) <= 1)
        {
            cnt++;
            i++;
            j++;
        } else if(a[i] < b[j])
        {
            i++;
        }else j++;


    }

    

    cout << cnt << endl;

    
    
    
    return 0;
}
