#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin >> n;

    vector<long long> a(n);

    for(long long i= 0; i<n ; i++) cin >> a[i];

    long long maxi = LLONG_MIN;
    long long sum = 0;

    for(int i = 0; i<n; i++)
    {
        sum += a[i];
        maxi = max(sum, maxi);

         if(sum < 0) 
    {
        sum = 0;
    }

    }

      

    

    cout << maxi << endl;


    return 0;
}