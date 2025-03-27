#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        int h[n]; 
        for (int i = 0; i < n; i++) 
        {
            cin >> h[i]; 
        }

        int maxH = 0, sec = 0; 

        for (int i = 0; i < n - 1; i++) {
            if (h[i] > maxH) {
                maxH = h[i]; 
            }
            if (maxH >= h[n-1]) {
                sec++;
            }
        }
        cout << sec << endl; 
    }
    return 0;
}
