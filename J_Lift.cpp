#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    int caseNo = 1;
    while(t--)
    {
        cout << "Case " << caseNo << ": ";
        caseNo++;
        int myPos , liftPos ;
        cin >> myPos >> liftPos;

        int totalTime = abs(myPos-liftPos)*4 + 3 + 5 + 3 +( myPos * 4 ) + 3 + 5;

        cout << totalTime << endl;

    
    }




    return 0;
}