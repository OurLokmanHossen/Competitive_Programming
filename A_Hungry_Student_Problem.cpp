#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;  cin >> t;
    while(t--)
    {
        int x; cin >> x;

        // if(x % 3 == 0 || x % 7 == 0 || x == 10 || x > 11) cout << "YES" << endl;
        // else cout << "NO" << endl;

        bool found = false;

        for(int i = 0; i * 3 <= x ; i++)
        {
            for(int j = 0; j * 7 <= x ; j++)
            {
                if( i* 3 + j * 7 == x)
                {
                    found = true; break;
                }
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;

       
    }


    return 0;
}