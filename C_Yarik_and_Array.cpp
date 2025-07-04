#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++) 
            cin >> a[i];

        int ans = INT_MIN, curr = 0;
        
        for(int i = 0; i < n; i++) 
        {
            if(i > 0 && (abs(a[i - 1]) % 2) == (abs(a[i]) % 2)) 
            {
                curr = a[i];
            } 
            
            else 
            {
                curr = max(a[i], curr + a[i]);
            }

            ans = max(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}
