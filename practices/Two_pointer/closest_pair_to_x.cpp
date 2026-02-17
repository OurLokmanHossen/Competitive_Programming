#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];

    sort(a,a+n);

    int x; cin >> x;

    int i = 0, j = n-1;
    int dif = INT_MAX;
    int ind1, ind2;
    
    while(i<j)
    {

        int sum = a[i] + a[j];

      if(abs(sum - x) < dif)
      {
         ind1 = i;
         ind2 = j;
         dif = abs(sum - x);
      }
       if(sum> x) j--;
       else i++;
    }

    cout << a[ind1] << " " << a[ind2] << " = " << a[ind1] + a[ind2] << endl;


    
    return 0;
}
