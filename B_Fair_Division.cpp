#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int a[n];

        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i<n; i++) 
        {
            cin >> a[i];
            if(a[i] == 1) cnt1++;
            else cnt2++;
        }

        int total = cnt1 * 1 + cnt2 * 2;

        if(total % 2 != 0)
        {
            cout << "NO" << endl;
            
        }
        else 
        {
           if(cnt2 % 2 == 0)
           {
             cout << "YES" << endl;
           }else{
            if(cnt1 >= 2) 
            {
                cout << "YES" << endl;
            }else cout << "NO" << endl;
           }
        }




       
        
    }
    
    return 0;
}
