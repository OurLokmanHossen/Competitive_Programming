#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int digit , rev = 0, original = n;

    while(n > 0 ){

            int digit = n % 10;
            rev = rev * 10 + digit;
            n /=10;
    }

    //    if(rev == original) 
    //    cout << rev << "\nYES" << endl;
    //    else 
    //    cout << rev << "\nNO" << endl;

    cout << rev << endl;

    if(rev == original)
    cout << "YES" << endl;
    else 
    cout << "NO"  << endl;

    return 0;
}

