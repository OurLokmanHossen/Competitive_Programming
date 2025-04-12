#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
 
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n ;
        int sum = 0, rem ;

       while(n !=0 ){
         rem = n % 10 ;
         sum = sum + rem;
         n /=10;
       }
       cout << sum << endl;
    }
    return 0;
}