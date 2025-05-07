#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n , a, b;
    cin >> n >> a >> b;

   ll total = a+b;
   ll segments = n / total;
    cout << segments * a + min(n % total, a);
    return 0;
}