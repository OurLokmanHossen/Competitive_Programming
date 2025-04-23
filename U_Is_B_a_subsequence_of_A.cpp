#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // int n, m; cin >> n >> m;
    // int a[n], b[m];

    // for(int i = 0; i< n ; i++) cin >> a[i];
    // for(int j = 0; j< m ; j++) cin >> b[j];

    // int j = 0; 
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] == b[j]) j++;
    // }

    // cout << (j == m ? "YES" : "NO") << endl;

    string s1, s2; cin >> s1 >> s2;

    // s1 = abcde , s2 = ace
 

    int j = 0; 
    for(int i = 0; i<s1.size(); i++)
    {
        if(s1[i] == s2[j]) j++;
//In subsequence checking, we must compare s1[i] with s2[j], not s2[i].
    }

    cout << (j == s2.size() ? "YES" : "NO" ) << endl;


    return 0;
}