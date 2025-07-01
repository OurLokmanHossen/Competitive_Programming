#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int year = n / 365;

    n = n % 365;

    int month = n / 30; 

    int day = n % 30;

    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;

    return 0;
}
