#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 10, 20, 20, 20, 30, 40, 40}; // Sorted vector

   for(int i = 0; i<v.size();)
   {
    int x = v[i];

    int ub = upper_bound(v.begin(), v.end(),x) - v.begin();

    int cnt = ub - i ;

    cout << x << " " << cnt << endl;

    i = ub;
   }

    return 0;
}
