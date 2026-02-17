#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

        int n; cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0 ; i< n; i++) cin >> a[i];

        b = a;
        sort(b.begin(), b.end());

        int cnt = 0;

        for(int i = 0; i<n; i++)
        {
           if(a[i] != b[i]) cnt++;
        }

        if(cnt <= 2 ) cout << "Sorted" << endl;
        else cout << "Failed" << endl;


    return 0;
}
