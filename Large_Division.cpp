#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin >> t;
    int caseNo = 1;
    while(t--)
    {
        
    string a; cin >> a;
    int b ; cin >> b;

    cout << "Case " << caseNo << ": " ;
    caseNo++;

    int i = 0; 
    int rem = 0;

    if(a[0] == '-') i = 1;

    for(; i<a.size(); i++)
    {
        int num = a[i] - '0';
        rem = rem * 10 + num;
        rem = rem % b;
    }

    if(rem == 0) {
        cout << "divisible" << endl;
    }
    else
    {
        cout << "not divisible" << endl;
    }

    }

    return 0;
}