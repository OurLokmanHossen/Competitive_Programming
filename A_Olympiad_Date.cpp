#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int cnt[10] = {};
    bool flag = false;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x]++;

        if(cnt[0] >= 3 && 
            cnt[1] >= 1 && 
            cnt[2] >= 2 && 
            cnt[3] >= 1 && 
            cnt[5] >= 1 && !flag) {
            cout << i + 1 << endl;
            flag = true; 
         }
    }

    if(!flag) {
        cout << 0 << endl; 
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
