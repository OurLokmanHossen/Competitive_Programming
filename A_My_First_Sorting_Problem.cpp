#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
    //   if(x < y)
    //   {
    //     cout << x << " " << y << endl;
    //   } else
    //     cout <<  y << " " << x << endl;
    // }

    cout << min(x,y) << " " << max(x,y) << endl;
    }
    return 0;
}