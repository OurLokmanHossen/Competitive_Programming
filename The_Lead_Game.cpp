#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    int s1 = 0, s2 = 0;
    int w = 0, lead = 0;

    while(n--)
    {
       int p1, p2; cin >> p1 >> p2;
       
       s1 += p1;
       s2 += p2;

       int curr_lead = abs(s1- s2);

       if(curr_lead > lead) 
       {
         lead = curr_lead ;
         s1 > s2 ? w = 1 : w = 2;
       }
    }

    cout << w << " " << lead << endl;


    return 0;
}
