#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;

        while(x > 3)
        {
            x -= 3;
        }

        if(x % 2 == 0)
        {
            x /= 2;
        }

        cout << x << endl;
    }
    
    return 0;
}