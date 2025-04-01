#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int n;
        cin >> n;  
        int a[101];  // Array to store the beauty values (n <= 100)
        
        // Read the beauty values of the sheep
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
       
        int mini = a[0], maxi = a[0];
        for (int i = 1; i < n; i++) {
            mini = min(a[i],x);
            mixi = max(a[i],x);
        }
        cout << maxi - mini << "\n";
    }
    
    return 0;
}
