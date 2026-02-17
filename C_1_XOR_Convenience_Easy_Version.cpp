#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        set<int> st;

        for(int i = 1; i<n; i++) st.insert(i+1);
        vector<int> a(n+1);

        for(int i = 2; i< n; i++)
        {
            int x = i ^ 1;
            st.erase(x);
            a[i] = x;
        }
        
        a[n] = 1;
        a[1] = *st.begin();

        for(int i = 1; i<= n; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl;
       
        
    }
    
    return 0;
}
