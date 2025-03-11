#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x , a;
        cin >> n >> x;

        int sum =0;

        for(int i =0 ; i<n ; i++ )
        {
            cin >> a;
            sum += a;
        }

        if(sum/n == x && sum % n ==0)
        {
          cout << "YES" << endl;
        }
        else
        cout << " NO" << endl;

    }

    return 0;
}