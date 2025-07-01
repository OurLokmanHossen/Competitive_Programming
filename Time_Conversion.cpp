#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int hour = n / 3600;

    n = n % 3600;

    int min = n / 60; 

    int sec = n % 60;

    cout << hour <<":" <<  min << ":" << sec << endl;


    return 0;
}
