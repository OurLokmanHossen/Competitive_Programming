#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int c[n]; 
    
    for(int i = 0; i<n; i++)
    {
        cin >> c[i]; //candies
        
    }
    
    int a, b;
    cin >> a >> b;

    int sum = 0;

    for(int i = a; i<= b ; i++ )
    {
    sum += c[i];
    }

    cout << sum << endl;


    return 0;
}