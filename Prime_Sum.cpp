#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        } 

       int cnt = 0;

        for(int i = 0; i<n; i++)
        {

           for(int j = i+1; j<n; j++)
           {
             int num = a[i] + a[j];

              bool isPrime = true;

       if(num < 2) isPrime = false;
       else
       {  
          for(int k = 2; k*k <= num; k++)
       {
            if(num % k == 0) 
            {
                isPrime = false;
                break;
            }
        } 
       }
             if(isPrime) cnt++;
           }

           
        }

        cout << cnt << endl;
    
    }
    
    return 0;
}
