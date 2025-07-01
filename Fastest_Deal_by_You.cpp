#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, b ; cin >> n >> b;

    int s, c;

    int maxD = 0;

    for(int i = 0 ; i < n ; i++)
    {  
        
            cin >> s >> c;
        
            int data = (s*(b/c));
            maxD = max(data, maxD);

    }

    cout << maxD << endl;



    return 0;
}