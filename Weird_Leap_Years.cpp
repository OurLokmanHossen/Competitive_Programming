#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int y1, y2; cin >> y1 >> y2;

    int start = min(y1, y2);
    int end = max(y1, y2);

    bool found = false;

    for (int i = start; i <= end; i++) 
    
    {
        if (((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) || (i % 9 == 0 && i % 45 != 0)) 
        {
            found = true;

            cout << i << endl;
              
        }
    }

    

    if (!found) cout << "No Weird Leap Year" << endl ;

    return 0;
}