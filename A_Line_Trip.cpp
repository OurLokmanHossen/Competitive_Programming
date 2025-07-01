#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;

        int ans = 0 , prev = 0 ;

        for(int i = 0 ; i< n ;i++) 
        {
            int st; cin >> st;

            ans = max(ans, st - prev);
            prev = st;
        }

        ans = max(ans, 2 * (x - prev));
        cout << ans << endl;

    }

    return 0;
}