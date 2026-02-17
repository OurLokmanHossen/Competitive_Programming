#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    //  string s; cin >> s;
  
//   map<char, int> freq;
  
//   for(char c : s) freq[c]++;
  
//   for(auto it: freq)
//   {
//       cout << it.first << "->" << it.second << endl;
//   }

    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];  

    map<int,int> freq;  // number -> count
    for(int x : a)
        freq[x]++;      // frequency count

    // output frequency
    for(auto it : freq)
        cout << it.first << " -> " << it.second << "\n";
    
    return 0;
}
