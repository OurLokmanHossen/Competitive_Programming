#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   string a, b; cin >> a >> b;

   int n = a.size();

   string s = "";

   for(int i = 0; i<n; i++)
   {
      if(a[i] - '0' == b[i] - '0') s += '0';
      else s += '1';
   }

   cout << s << endl;
    return 0;
}
