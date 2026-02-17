#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

        int n, q; cin >> n >> q;

        vector<int> a(n);

        for(int i = 0; i<n ; i++) cin >> a[i];

        sort(a.begin(), a.end());

        while(q--)
        {
           string type ; cin >> type;

           int x; cin >> x;

           if(type == "lower_bound")
           {
            auto lb = lower_bound(a.begin(), a.end(), x);
             if( lb == a.end())
             {
                cout << -1 << endl;
             }
             else cout << *lb << endl;

           } else if(type == "upper_bound")
           {
              auto up = upper_bound(a.begin(), a.end(),x);

              if( up == a.end())
              {
                 cout << -1 << endl;
              }else
              {
                cout << *up << endl;
              }
            }
             else 
             {
                auto found = binary_search(a.begin(), a.end(), x);

                if( !found) cout << "not found" << endl;
                else cout << "found" << endl;
             } 
            
           
        }
    
    return 0;
}
