#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int X, Y;
	cin >> X >> Y;
    int stop = Y/X;
    
    if (Y%X ==0)
    {
         stop--;
    }
    
	else 
    {
        cout <<0;
    }
	
	cout << stop;
  return 0;
}