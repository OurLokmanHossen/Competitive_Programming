#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string sum;
    cin>>sum;

    int n = sum.length();

    for(int i = 0 ; i<n; i=i+2)
    {
        for(int j = 0; j<i; j=j+2)
        {
            if(sum[j]> sum[i])
            {
                swap(sum[j], sum[i]);
            }
        }
    }
    cout << sum << endl;

    return 0;
}