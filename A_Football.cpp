#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
        int n; cin >> n;

        map<string , int> freq;

        for(int i = 0; i<n; i++)
        {
            string s; cin >> s;

            freq[s]++;
        }

        string win;
        int maxG = 0;

        for(auto it : freq)
        {
            if(it.second > maxG)
            {
                maxG = it.second;
                win = it.first;
            }
        }

        cout << win;
        
    return 0;
}
