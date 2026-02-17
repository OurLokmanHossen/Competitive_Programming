#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    
    int t; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<string> a(n), b(n), c(n);
        unordered_map<string,int> freq;

        for(int i = 0; i<n; i++) { cin >> a[i]; freq[a[i]]++; }
        for(int i = 0; i<n; i++) { cin >> b[i]; freq[b[i]]++; }
        for(int i = 0; i<n; i++) { cin >> c[i]; freq[c[i]]++; }

        int s1 = 0, s2 = 0, s3 = 0;

        for(auto it : a) 
        {
            if(freq[it] == 1) s1 += 3;
            else if(freq[it] == 2) s1 += 1;
        }
        for(auto it : b) 
        
        {
            if(freq[it] == 1) s2 += 3;
            else if(freq[it] == 2) s2 += 1;
        }
        for(auto it : c)
        {
            if(freq[it] == 1) s3 += 3;
            else if(freq[it] == 2) s3 += 1;
        }

        cout << s1 << " " << s2 << " " << s3 << endl;
    }
    return 0;
}
