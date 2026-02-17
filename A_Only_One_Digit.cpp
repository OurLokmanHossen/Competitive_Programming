#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

       string s; cin >> s;

       int n = s.size();

       char mini = 'z';

       for(int i = 0; i<n ; i++)
       {
          if(s[i] < mini)
          {
            mini = s[i];
          }
       }

       cout << mini << endl;
         
    }
    return 0;
}
