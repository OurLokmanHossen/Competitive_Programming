#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
    

        map <int , int > freq;

        int ans = -1;

        int x; 

        for(int i = 0; i< n; i++)
        {
    
            cin >> x;
            freq[x]++;

            if(freq[x] == 3 ) 
        {
            ans = x;
        }

        }

        cout << ans << endl;

    }

    return 0;
}