#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long a[n], b[n];

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + n);

        long long maxi1 = b[n - 1];
        long long maxi2 = b[n - 2];

        for (int i = 0; i < n; i++) 
        {
            if (a[i] != maxi1) 
            {
                cout << a[i] - maxi1 << " ";
            } 
            
            else 
            {
                cout << a[i] - maxi2 << " ";
            }
        }
        cout << endl;;
    }

    return 0;
}
