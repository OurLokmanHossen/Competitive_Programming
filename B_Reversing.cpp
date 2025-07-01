#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i<n ; i++)
    {
        if(a[i] == 0)
        {
            int l = 0, r = i-1;

        while(l<r)
      {
          swap(a[l],a[r]);
          l++;
          r--;
      }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
