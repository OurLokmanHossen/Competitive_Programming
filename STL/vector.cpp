// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){


//     //  vector তৈরি + মান ঢোকানো + প্রিন্ট করা
// //     vector<int> v;

// //     v.push_back(10);
// //      v.push_back(30);
// //       v.push_back(50);
// //  int n = v.size();
// //       for(int i = 0 ; i<n ;i++)
// //       {
// //         cout << v[i] << " " ;
// //       }

// // output  10, 20 , 30


//     return 0;
// }


// Input নেওয়া + Sort করা

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;

    vector<int> v;

    for(int i = 0 ; i<n; i++)
    {
        int x ; cin >> x;
        v.push_back(x); 
    }

    // for(int i = 0; i<n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    sort(v.begin(),v.end());

    for(auto x : v)
    {
        cout << x << " " ;
    }
    return 0;
}
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<string , int>> stu;

    stu.push_back({"A", 10});
    stu.push_back({"B", 20});

    for(auto x : stu)
    {
        cout << "Name : " << x.first << " " << ", ID : " << x.second << endl;
    }
    
    return 0;
}
