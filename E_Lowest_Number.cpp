 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;
    int a[n];

    int mi = INT_MAX, ind ;

    for(int i = 1; i <=n; i++)
    {
        cin >> a[i];

       if(a[i] < mi)
       {
        mi = a[i];
        ind = i;
       }
        
    }

    cout << mi << " " << ind << endl;

    return 0;
}