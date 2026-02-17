#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

  int a, b; cin >> a >>  b;
  
   int mini = min(a,b);
   int maxi = max(a,b);
   
       
       if( a < b)
       {
           cout << mini * 5 + (abs(a-b)) * 2;
            
       } else cout << mini * 5 + (abs(a-b)) * 1;


   
   
}
