#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n; int a[n];

    int totalSum = 0;

    for(int i = 0; i<n; i++ )
    {
        cin >> a[i];
        totalSum += a[i];
    }

    sort(a , a+n, greater<int>());

        int my_sum = 0;
        int coinCnt = 0;
            for(int i = 0; i< n; i++)
            {
                my_sum += a[i];
                coinCnt++;
                if(my_sum > totalSum - my_sum) break;
            }

            cout << coinCnt << endl;
            
    return 0;
}