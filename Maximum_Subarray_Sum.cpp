#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

        ll n; cin >> n;
        vector<ll> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        ll currSum = 0, maxSum = INT_MIN;

        for(int i = 0; i<n; i++)
        {
           currSum += a[i];
           maxSum = max(maxSum, currSum);

           if(currSum < 0) currSum = 0;
        }

        cout << maxSum << endl;

    return 0;
}
