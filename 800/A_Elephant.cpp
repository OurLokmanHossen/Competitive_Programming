#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

   // we have to solve this problem using Greedy Algo.
   // took bigger value
      
    int x;
    cin >> x;

    int minSteps = x / 5;
    if (x % 5 != 0)
    {
        minSteps++ ;
    }

  cout << minSteps << endl;

    return 0;
}