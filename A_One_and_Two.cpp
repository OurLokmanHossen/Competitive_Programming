#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        int a[n];

        for(int i = 0 ; i<n; i++) cin >> a[i];

        int total_num_of_two = 0;

        for(int i = 0; i<n ; i++)
        {
            if(a[i]== 2) total_num_of_two++;
        }

        int two_in_prefix = 0;
        int ans = -1;

        for(int i = 0; i< n ; i++)
        {
          if(a[i] == 2)
          {
            two_in_prefix++;
          }

          int two_in_right = (total_num_of_two - two_in_prefix);

          if( two_in_prefix == two_in_right)
          {
            ans = i+1;
            break;
          }

        }

        cout << ans << endl;

    }

    return 0;
}