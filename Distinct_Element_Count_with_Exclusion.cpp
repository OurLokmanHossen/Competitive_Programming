#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , x; cin >> n >> x;


    set<int> st;

    for(int i = 0; i<n; i++)
    {
        int e ;
        cin >> e;
        
        if(x != e)
        {
         st.insert(e);
        }
        
    
    }

    cout << st.size() << endl;

    return 0;
}