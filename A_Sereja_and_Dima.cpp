#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i<n; i++) cin >> a[i];

    int s = 0, d = 0, l = 0, r = n -1;

    int turn = 0;

    while(l<=r)
    {
        int pick ;
        if(a[l]>a[r]) 
        {
          pick = a[l];
          l++;
        }
        else 
        {
            pick = a[r];
            r--;
        }

        if(turn % 2 == 0)
            s+= pick;
        else {
            d+= pick; 
        }

        turn++;

    }

     cout << s << " " <<  d << endl;  

    return 0;
}
