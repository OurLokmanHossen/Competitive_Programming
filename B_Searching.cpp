#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ar[n];

    for(int i = 0; i< n; i++)
    {
        cin >> ar[i];
    }

    int x;
    cin >> x;

    int index = -1;

    for(int i = 0; i< n; i++)
    {
        if(ar[i] == x)
        {

            index = i;
            break;
        }
        
    }

    cout << index << endl;

    return 0;
}