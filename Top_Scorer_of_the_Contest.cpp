#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;

    int maxS = 0, score;
    string name, TS;

    
    for(int i = 0 ; i<n; i++)
    {
        cin >> name >> score;

        if( score > maxS)
        {
            maxS = score;
            TS = name;

        }

    }

    cout << TS << endl;

    return 0;
}