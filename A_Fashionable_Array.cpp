#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) 
            cin >> v[i];

        sort(v.begin(), v.end());

        for(int i = 0 ; i<n; i++)
        {
            if((v[i] + v[n-1]) % 2 == 0 || (v[0] + v[n-1-i]) % 2 == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
