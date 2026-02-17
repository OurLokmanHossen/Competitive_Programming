 // pair

#include <bits/stdc++.h>
using namespace std;

int main(){

   pair <int , int > p;

   p = {2, 4};

   pair<int , int > &p1 = p;

   p1.first = 5;

   cout << p1.first << " " << p1.second << endl;


    return 0;
}

