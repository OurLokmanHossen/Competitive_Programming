#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;
    
    set<char> st;
   for( char c : s) {
    st.insert(tolower(c)); // convert to lowercase and store it into c
   }
 
   cout << (st.size() == 26 ? "YES" : "NO") << endl;

    return 0;
}

// not solved yet.