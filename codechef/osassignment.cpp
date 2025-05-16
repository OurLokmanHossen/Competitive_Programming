#include<bits/stdc++.h>

using namespace std;
 
int main() {
    
   int m , n; 
    
    while(cin >> m >> n)
    {
    
    long long a = 1 , b = 1 ;
    
    for(int i = 1 ; i <= m ; i++)
    {
       a = a * i; 
    }
    
     for(int i = 1 ; i <= n ; i++)
     {
         b = b * i;
     }
     
     cout << a + b << endl;
    }
     
    return 0;
}