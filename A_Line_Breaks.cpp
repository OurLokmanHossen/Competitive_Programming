#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  
        int t; cin >> t;
        while(t--){
                int n , m;
                cin >> n >> m;

                int len= 0, x = 0;
                string s;
                for(int i = 0; i< n; i++)
                {
                        cin >> s;
                        len += s.size();
                        if(len <= m)
                        x++;
                }

                cout << x << endl;
        }

    return 0;
}