#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

       int n; cin >> n;

       map<char, int> freq;

       for(int i = 0; i<n ;i++)
       {
          string s; cin >> s;

          for(int i = 0; i<s.size(); i++)
          {
            freq[s[i]]++;
          }
       }

    

    //    for(auto it : freq)
    //    {
    //      cout << it.first << " " << it.second << endl;
    //    }

       int c = freq['c']/2;
       int o = freq['o'];
       int d = freq['d'];
       int e = freq['e']/2;
       int f = freq['f'];
       int h = freq['h'];

       cout << min({c,o,d,e,f,h}) << endl;
        
    }
    
    return 0;
}
