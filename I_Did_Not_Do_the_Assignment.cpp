#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
        
        int n; cin >> n;

        bool found = true;

        for(int i = 2; i<= sqrt(n); i++)
        {
            if(n % i == 0) found = false;
        }

        if(found) cout << "NO PUNISHMENT" << endl;
        else {

            for(int i = 0; i<n; i++)
            {
                cout << "I DID NOT DO THE ASSIGNMENT." << endl;
            }
        }
    
    return 0;
}
