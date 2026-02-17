#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    string s; cin >> s;

    // for(int i = 0; i<n; i++)
    // {
    //     s[i] = tolower(s[i]);
    // }

    for(char &c : s) 
    {
        c = tolower(c);
    }

    set<char> st;

    for(char c : s)
    {
      if( c >= 'a' && c <= 'z') st.insert(c);
        
    }

    if(st.size()== 26) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
