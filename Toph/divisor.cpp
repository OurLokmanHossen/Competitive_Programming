#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {

	int n ; cin >> n;

	for(int i = 1; i<= n; i++)
		{
			if(n % i == 0)
			{
				cout << i << endl;
			}
		}
}

int main() {
    fastio();
    int t = 1; //cin >> t;
    while (t--) solve();
}
