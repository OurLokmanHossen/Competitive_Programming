#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        string r[n];

        for(int i = 0; i< n ;i++) cin >> r[i];

        for(int i = n-1 ; i >= 0 ; i--)
        {
            for(int j = 0; j<4; j++)
            {

              if(r[i][j] == '#' ) 
              {
                cout << j + 1 << " " ;
                break;
              }

            }
        }
        cout << endl;
    }




    return 0;
}