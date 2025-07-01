#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , q; cin >> n >> q;

    int freq[n+1] = {0};

    while(q--)
    {
        int z, x; cin >> z >> x;

        if(z == 1){
            freq[x]++;
        }
        else cout << freq[x] << endl;

    }

    return 0;
}