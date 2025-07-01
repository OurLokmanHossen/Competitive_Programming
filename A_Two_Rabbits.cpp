#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int x , y , a , b;
        cin >> x >> y >> a >> b;

       int dis = y-x;
       int speed = a + b;

       int time = dis / speed;

        if(dis % speed == 0) cout << time << endl;
        else cout << -1 << endl;

    }

    return 0;
}