#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;cin>>n;
            vector<int>ab(n);
            for(auto &it : ab) cin>>it;
            bool ans = false;
            for(int i = 0;i<n;i++)
            {
                int x = ab[i];
                if(x % 3 == 0) ans = true;
                for(int j = i+1;j<n;j++)
                {
                    x+=ab[j];
                    if(x % 3 == 0) ans = true;
                }
            }
            cout<<(ans?"Yes":"No")<<endl;
        }

        return 0;
    }