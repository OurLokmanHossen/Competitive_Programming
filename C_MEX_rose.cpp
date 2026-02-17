#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

         int n, k; cin >> n >> k;

         vector<int> a(n);
         for (int i = 0; i < n; i++) cin >> a[i];

         int cntk = 0;
         
         set<int> st;

         for(int i = 0; i < n; i++) {
             if (a[i] == k) cntk++;
             if(a[i] < k) st.insert(a[i]);
         }

         int missing = k - st.size();

         cout << max(missing, cntk) << endl;

         
    }
    
    return 0;
}
