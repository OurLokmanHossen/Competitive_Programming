#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int x , h;
    cin >> x >> h;

    cout <<( abs(4-x) * 24 ) + h << endl;
    
    return 0;
}
