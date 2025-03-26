#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {

        int a, b, c;
        cin >> a >> b >> c;

        //cout << (a+b+c-min({a,b,c}) >= 10 ? "YES\n" : "NO\n");

        if (a + b >= 10 || b + c >= 10 || a + c >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
