#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n, x ; cin >> n >> x;
        int a[n];

        int firstDoor = INT_MAX;
        int lastDoor = INT_MIN;

        for(int i = 0; i<n ; i++)
        {

            cin >> a[i];

            if(a[i]== 1)
            {
                firstDoor = min(firstDoor, i);
                lastDoor = max(lastDoor, i);
            }
        }

        int need = lastDoor - firstDoor ;

        if(need < x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}