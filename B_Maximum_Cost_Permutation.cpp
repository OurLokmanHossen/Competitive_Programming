#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++) cin >> a[i];

        vector<int> freq(n+1);

        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) freq[a[i]]++;
        }

        vector<int> missing;
        for(int i=1;i<=n;i++)
        {
            if(freq[i]==0) missing.push_back(i);
        }

        int ind = missing.size()-1;

        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                a[i] = missing[ind];
                ind--;
            }
        }

        int l=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i] != i+1)
            {
                l=i;
                break;
            }
        }

        int r=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] != i+1)
            {
                r=i;
                break;
            }
        }

        if(l==-1 && r==-1) cout << 0 << endl;
        else cout << r-l+1 << endl;
    }
    return 0;
}
