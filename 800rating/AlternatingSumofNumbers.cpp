#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {

    //when index = even then add but index = odd then subtract
    
        int n;
        cin >>n;

        int alternateSum = 0;
        for(int i = 0; i<n; i++)
        {
           int a ;
           cin >> a;
        (i%2 == 0) ? alternateSum += a : alternateSum -= a; //ternary operator
        }
        cout << alternateSum <<endl;
       
    }
    return 0;
}