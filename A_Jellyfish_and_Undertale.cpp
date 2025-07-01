#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin >> t;
    while(t--)
    {
        int a , b , n; cin >> a >> b >> n;
        int arr[n];
        ll ans = 0;
        ans+=(b-1);
        b = 1;
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
            b+=arr[i];
            if(i == n-1)
            {
                b = min(b,a);
                ans+=b;
                break;
            }
            b = min(a,b);
            ans+=(b-1);
            b = 1;
        }
        cout<<ans<<endl;

    }

    return 0;
}