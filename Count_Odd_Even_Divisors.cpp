#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    
    {
        int n; cin >> n;

        int oddcnt = 0 ;
        int evencnt = 0 ;

       for(int i = 1; i<=n; i++)
       {
        if(n % i == 0)
        {
            if(i % 2 == 0)
            {
                evencnt++;
            }
            else oddcnt++;
        }
       }

       cout << oddcnt << " " << evencnt << endl;
    }

    return 0;
}