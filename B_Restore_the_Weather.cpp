as#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--)
    {
        int n , k; cin >> n >> k;
        int a[n], b[n];

        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }

        for(int i = 0 ; i <n ; i++)
        {
            cin >> b[i];
        }

        sort(b, b+n);

        for(int i = 0; i < n ; i++)
        {
            if(abs(a[i] - b[i]) <= k)

            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}