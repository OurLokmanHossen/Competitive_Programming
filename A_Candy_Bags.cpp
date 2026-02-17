#include <iostream>
using namespace std;

 int main(){

    int n; cin >> n;

     int l= 1, r = n * n;

    for(int i = 1; i<=n; i++)
    {
        // each line should have n begs and same numbers candies
       {
       for(int j = 1; j<=n/2; j++) 
        cout << l++ << " " << r-- << " " ;
       }

       cout << endl;
       
    }
   
    return 0;
}