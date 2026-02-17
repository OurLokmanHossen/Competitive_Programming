#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> a(n);

         int upvote = 0, downvote = 0;

        for(int i = 0; i<n; i++) 
        {
            int x ; cin >> x;

            if(x == 1) 
            {
                upvote++;
            }
            else if(x == 3 ) 
            {
                upvote++;
            }
           
        }

        cout << upvote << endl; 

         
        
    }
    
    return 0;
}
