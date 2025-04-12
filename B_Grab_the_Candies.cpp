#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t ;
    
    while(t--)
    {
        int n; cin >> n;
        int x , mihai = 0 , bianca = 0;
        for(int i= 0; i< n; i++)
        {
            cin >> x;
            if(x % 2 ==0 ){
                mihai +=x;
            }
            else 
            bianca +=x;  
        }
        if(mihai>bianca)
        {
            cout << "YES\n" ;
        }
         else 
          cout << "NO\n" ;
   }

    return 0;

}