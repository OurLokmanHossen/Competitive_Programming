#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int a[n];

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    bool isPalindrome = true;

    for(int i = 0; i<n; i++)
    {
        if(a[i] != a[n-1-i])
        {
            isPalindrome = false;
        }
    }

    if(isPalindrome) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}