#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // if(a % b == 0) return b;

    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){

  cout << gcd(12,4) << endl;
  cout << __gcd(12,4) << endl;

  cout <<  (12 * 4) / gcd(12,4) << endl;

}