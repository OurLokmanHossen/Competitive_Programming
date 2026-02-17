#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        sort(s.rbegin(), s.rend());

        cout << s << endl;

       int good = 0, c1 = 0, c0 = 0;

        
        for (char ch : s) 
        {
            if (ch == '1') c1++;
            else c0++;

            if (c1 >= c0) good++; 
        }

        cout << good << endl;
       
    }

    return 0;
}
