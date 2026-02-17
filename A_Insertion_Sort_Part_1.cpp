#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int a[n];

    for(int i = 0; i<n; i++) cin >> a[i];
    

    for(int i = 1; i<n; i++)
    {
        int k = a[i];
        int j = i - 1;

        while(a[j] > k && j >= 0)
        {
            a[j+1] = a[j];
            j--;
        }
          a[j+1] = k;

          for (int out = 0; out < n; out++) 
          {
            cout << a[out] << " ";
          }

          cout << endl;

    }


    return 0;
}