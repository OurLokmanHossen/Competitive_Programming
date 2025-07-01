#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int k;
    cin>>k;
 
    int months[12];
 
    for(int i = 0; i<12; i++)
    {
        cin>>months[i];
    }
 
    sort(months, months + 12, greater<int>());
    
    int n = 0;

    if( k == 0)
    {
        cout<< 0;
        return 0;
    }
    for(int i = 0; i < 12; i++)
    {
        k -= months[i];

        if(k<=0)
        {
            n = i + 1;
            break;
        } 
    }
 
    if(k > 0)
        cout << -1;
    else
        cout << n;
 
    return 0;
}