#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin >> a >> b;

    int g = __gcd(a,b);

    int cnt = 0;

    for(int i = 1; i*i <= g ; i++)
    {
        if(g % i == 0)
        {
            cnt++;
        }
        if(i != g / i) cnt++;
    }

    cout << cnt << endl;




    return 0;
}