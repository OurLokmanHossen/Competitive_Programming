#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;
        string s; cin >> s;

        string re = s;

        reverse(re.begin(), re.end());

        if(s.size() == 1) {cout << "NO" << endl; continue;}

        if(s < re) {
            cout << "YES" << endl; continue;
        }

        bool allsame = true;


        for(int i = 0; i<n; i++)
        {
            if(s[i] != s[0]) allsame = false;
        }

        if(allsame) {cout << "NO" << endl; continue;}

        //palindrome

        if(s == re) 
        {
            if(k > 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else{
             if(k > 0) cout << "YES" << endl;
             else cout << "NO" << endl;
        }

        







        
    }
    
    return 0;
}
