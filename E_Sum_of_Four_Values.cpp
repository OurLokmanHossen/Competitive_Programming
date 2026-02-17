#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;
    ll x; cin >> x;
    vector<pair<ll,int>> a(n);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i].first;
        a[i].second= i+1;
    }
    
    sort(a.begin(), a.end());

    for(int i = 0; i<n; i++)
    {
        for(int j = i +1 ; j <n; j++)
        {
            int l = j +1;
            int r = n-1;

            while(l<r)
            {
                ll sum = a[i].first + a[j].first + a[l].first + a[r].first;

                if(sum == x) {
                    cout << a[i].second << " " << a[j].second << " " << a[l].second << " " << a[r].second << endl;
                    return 0;
                }
                else if( sum < x) l++;
                else r--;
            }

        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
