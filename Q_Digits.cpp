#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--){

        string n;
        cin >> n;

        reverse(n.begin(), n.end());

        for(int i = 0 ; i<n.size(); i++)
        {
            cout << n[i] << " ";
        }
        cout << endl;
    }

    return 0;
} 