#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;

    vector<int> cnt(n+1, 0);

    for(int i = 2; i<= n; i++)
    {
        if(cnt[i] == 0)
        {
            for(int j = i; j <= n; j += i)
            {
                cnt[j]++;
            }
        }
    }

    int ans = 0;

    for(int p = 1; p <= n; p++)
    {
        if(cnt[p] == 2) ans++;
    }

    cout << ans << endl;

    
    return 0;
}
