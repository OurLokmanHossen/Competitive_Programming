#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

        int l, r, k; cin >> l >> r >> k;

        int cnt = 0;

        for(int i = l; i<= r; i++)
        {
             if(i % k == 0) cnt++;
        }
        cout << cnt << endl;


    return 0;
}
