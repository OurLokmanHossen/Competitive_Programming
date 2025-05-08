#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;

    while(t--)
    {
        int n ; cin >> n;
        string s; cin >> s;

        set<string> st;

        for(int i = 0; i<n-1; i++)
        {
            // string temp = s.substr(i,2); // s[0], s[1] everytime take 2 index
            // st.insert(temp);

            st.insert(s.substr(i,2));
            
        }
        cout << st.size() << endl;
    }
    return 0;
}