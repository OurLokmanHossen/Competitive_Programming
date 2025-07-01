#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;

        string s; cin >> s;

        map<char, int> mp;

        int flag = 0;

        for (int i = 1; i <= n - 2; i++) {
            mp[s[i]]++;
            if ((mp[s[i]] > 1) || (s[i] == s[0]) || (s[i] == s[n-1])) 
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
