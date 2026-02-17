#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int k; cin >> k;
        string s; cin >> s;

        string fb = "";

        for(int i = 1; i<=100; i++)
        {
            if(i % 3 == 0 && i % 5 == 0) fb += "FB";
            else if (i % 3 == 0) fb += "F";
            else if(i % 5 == 0) fb += "B";
           
            
           
        }

        // string :: npos = -1

        if(fb.find(s) != -1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
