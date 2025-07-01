#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2; cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((s1[i] - '0' )+ (s2[j] - '0') >= 10) 
            {
                cout << "Yes" << endl;
                return 0;
            }     
        }
    }

    cout << "No" << endl;

    return 0;
}