#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int D,Oc,Of,Od,Cs,Cb,Cm,Cd;
    cin >> D >> Oc >> Of >> Od >> Cd >> Cs >> Cb >> Cm >> Cd;

    int sum1 = Oc + (D-Of) * Od;
    int sum2 = Cb + (D/Cs) * Cm + D + Cd;

    if(sum1<=sum2) cout << "Online Taxi" << endl;
    else cout << "Classic Taxi" << endl;

    return 0;
}