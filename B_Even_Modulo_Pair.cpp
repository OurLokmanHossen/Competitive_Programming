#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        bool found = false;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                if (((v[i] % v[j]) % 2) == 0) 
                {
                    cout << v[j] << " " << v[i] << "\n";
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        if(!found) cout << -1 << "\n";
    }
    return 0;
}
