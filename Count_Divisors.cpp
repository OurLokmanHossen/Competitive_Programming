#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {

	int l, r, k;
	cin >> l >> r >> k;

	int cnt = 0;

	for(int i = l ; i<= r ; i++)
	{
	    if(i % k == 0) cnt++;
	}

	cout << cnt << endl;
}

int main() {
    fastio();
    int t = 1; //cin >> t;
    while (t--) solve();
}
