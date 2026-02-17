#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;
       vector <int> arr(n);

       vector <pair<int,int> > v;
       for(int i=0;i<n;i++)
       {
            cin>>arr[i];
            if(arr[i]%k != 0)v.push_back({arr[i]%k , i+1});
            else v.push_back({k,i+1});
       }
 
       sort(v.begin(),v.end(), [&](pair<int,int>a ,pair<int,int>b){
            if(a.first!=b.first) return a.first>b.first;
            else return a.second<b.second;
       });


        for (auto it: v){
            cout<<it.second<<" ";
        }
        cout<< endl; 
        
    }
    
    return 0;
}
