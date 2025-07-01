#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n, j, k; cin >> n >> j >> k;

        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i]; // প্রথমে সব ইনপুট নিই
        }

        int cnt = 0;
        int target = a[j - 1]; // এখন a[j-1] পাওয়া যাবে

        for(int i = 0; i < n; i++) {
            if(a[i] > target) cnt++;
        }

        if(cnt <= n - k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
