#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while(t--)
    {
        int k; cin >> k;

        int cnt = 0;

       for(int i = 1; i<=1666; i++)
       {
          if( i % 3 != 0 && i % 10 != 3)
          {
             cnt++;

             if( cnt == k)
             {
                cout << i << endl;
                
             }
          
          }
       }

      
        
      
    }

    return 0;
}
