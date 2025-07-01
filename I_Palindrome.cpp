#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;

    bool flag = true;

   int n = s.size();

    for(int i = 0; i<n/2; i++)
    {
        if(s[i] != s[n-1-i])
        {
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}