#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int a, b ; cin >> a >> b;

    int curA = a, brunt = 0, h = 0;

    while(curA>0)
    {
        h += curA;
        brunt += curA;
        curA = brunt/b;
        brunt = brunt% b;    
    }

   
    cout << h << endl; 
   
    
    return 0;
}
