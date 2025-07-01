#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {

        string s;
        cin >> s;
 
        int n = s.size();
 
        int cnt = 0;
 
        bool invalid = false;
 
        for(int i = 0; i<n; i++)
        {
 
            if(s[i]== ')' ) cnt++;
            else cnt--;
 
            if(cnt == 0 && i != n-1)
            {
               invalid = true;
            }
        }
        
        if(invalid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}