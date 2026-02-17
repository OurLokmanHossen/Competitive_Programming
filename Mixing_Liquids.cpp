#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b; cin >> a >> b;
        int l = 0;
            for(int i = 1; i<= a ; i++)
            {

                int x = i * 2;

                if(x <= b)
                {
                    l = i;
                }else 
                {
                    break;
                }
     
            }

           

            cout << l + l* 2<< endl;
           }
        
    
    return 0;
}
