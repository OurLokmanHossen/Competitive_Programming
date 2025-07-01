#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[n], B[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++) cin >> B[i];

    
    sort(A, A + n);

    sort(B, B + n);

    bool isPermutation = true;

    for (int i = 0; i < n; i++) 
    {
        if (A[i] != B[i]) 
        {
            isPermutation = false;
            break;
        }
    }

    if (isPermutation) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
