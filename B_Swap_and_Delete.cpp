#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        string s; cin >> s;

       int cnt0 = count(s.begin(), s.end(), '0');
       int cnt1 = s.size() - cnt0;

       string t = "";

       for(int i  = 0; i<s.size(); i++)
       {
           if(s[i] == '1')
           {  
            if(cnt0 > 0)
            {
                t += '0';
                cnt0--;
            } else break;
      }
        else 
        {
            if(cnt1 > 0)
            {
                t += '1';
                cnt1--;           
            }else break;
   
        }

       
       }

        cout << s.size() - t.size() << endl;


        
    }
    
    return 0;
}
