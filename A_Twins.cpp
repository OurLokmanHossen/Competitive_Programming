#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());

        int total_sum = 0;

        for(int i = 0; i<n; i++)
        {
            total_sum += a[i];
        }

         int preSum = 0, cnt = 0;

        for(int i = 0; i<n; i++)
        {
            preSum += a[i];
            cnt++;

            int remain_sum = total_sum - preSum;

            if(preSum > remain_sum) 
            {
                break;
            }
        }


        cout << cnt << endl;

      
      
    
    return 0;
}
