#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int a[n];

    for(int i = 0; i<n; i++) cin >> a[i];

    bool flag = false;

    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(a[i] == a[j])
            {
                flag = true;
            }
        }
    }

    
    
    return 0;
}