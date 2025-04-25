#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n; 

     for(int r = 1; r<=n; r++)
     {
        
        int ans = 0;

       for(int i = 1; i <=r ; i++)
    { 
        if(r % i == 0)
        {
            ans++;
        }
     }

       if(ans == 2)
       cout << r << " " ;
     }
}