#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int a , b;
        cin >>a >>b;
        /*
        (c−a)+(b−c) 
        = c - a + b - c  // c = a
        = b - a
        */
        int minimmumValue = b - a;
        cout << minimmumValue << endl;

    }


    return 0;
}
