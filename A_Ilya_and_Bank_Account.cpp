#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    if(n >= 0)
    {
        cout << n << endl;
    }

    else
    {
       int last = n % 10;
       int deletedlast = n / 10;
       int secondlast = (n /100) * 10 + last;

        cout << max(deletedlast, secondlast) << endl;

    }


}