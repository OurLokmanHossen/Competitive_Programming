#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0;

    int l = 0;

    // Left 
    for ( l = 0; l < n; l++) 
    {
        if (arr[l] <= k) cnt++;
        else break;
    }

    // Right 
    for (int j = n - 1; j >= l ; j--) 
    { 
        if (arr[j] <= k) cnt++;
        else break;
    }

    cout << cnt << endl;
    return 0;
}
