#include <bits/stdc++.h>
using namespace std;

int main() {

    long long a, b;

    cin >> a >> b;

    if (a > b) 
    {
  swap(a, b);
    }

    long long sum = 0, even = 0, odd = 0;

    for (long long i = a; i <= b; ++i) 
    {
        sum += i;

        if (i % 2 == 0) even += i;
        
        else odd += i;
    }

    cout << sum << "\n" << even << "\n" << odd << "\n";
}
