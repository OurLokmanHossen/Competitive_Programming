#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    string s;
    cin>>s;
    ll n=s.size();
    string p;
    for(ll i=0;i<n;i++){
        if(s[i]=='W' && s[i+2]=='B' && s[i+1]=='U'){
            if(p.size()!=0){
                cout<<p<<" ";
                p.clear();
            }
            i+=2;
        }
        else{
            p.push_back(s[i]);
        }
    }
    cout<<p<<endl;
    
}