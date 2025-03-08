#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, amount;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        
      
        if(x>=y)
        {
            amount = y;
        }
         
        else 
        amount = x + ((y-x) * 2);

        cout << amount << endl;
         
    }
    return 0;
}
