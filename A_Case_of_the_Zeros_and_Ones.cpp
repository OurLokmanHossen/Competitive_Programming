#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;
    string s; cin >> s;

    int cnt1 = 0, cnt0 = 0; 

    for(char c : s)
    {
        if( c == '1') cnt1++;
        else cnt0++;
    }

    int mini = min(cnt0,cnt1);

    if(cnt1 == cnt0) cout << 0 << endl;
    else cout << n - mini * 2 << endl;
    
    
    
    return 0;
}
