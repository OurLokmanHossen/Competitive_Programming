#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    // using for loop

//     int res = 0;

//     for(int i = 1; i*i<=n; i++)
//     {
//        res = i;
//     }
//  // it will return the floor result
//     cout << res << endl;

// using while loop

//  int res = 1;

//  while(res * res <= n)
//  {
//     res++;
//  }

//  cout << res-1 << endl;

  int res = sqrt(n);

  cout << res << endl;


    return 0;
}


