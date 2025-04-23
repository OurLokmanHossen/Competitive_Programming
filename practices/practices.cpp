// #include <bits/stdc++.h>
// using namespace std;

//  int main(){
//      int a, b;
//      char op ;
     
//      cin >> a >> op >> b;
     
//      if(op == '+') cout << a+b;
//      else if( op == '-') cout << a- b;
//      else if( op == '*') cout << a * b;
//      else if( op == '/') cout << a / b;
//      else cout << "Invalid Operator" ;

//  }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     string s ;cin >> s;
  
//     int count = 0;
//     for(char c : s)
//     if((c == 'a' || c=='A') || (c == 'e' || c=='E') || (c == 'i' || c=='I') || (c == 'O' || c=='o' ) || (c == 'u' || c=='U'))
//     {
//         count++;
//     }
//     cout << count << endl;

//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     string s ; cin >> s;
    
//     int cnt = 0;
//     for(int i = 0; i<s.size(); i++)
//     {
//       if((s[i] >=  'A') && (s[i] <= 'Z'))
//       {
//         cnt++;
//       }
//     }

// cout << cnt << endl;

//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     string s; cin >> s;

//     for(char &c : s){
//         if(isupper(c))
//         {
//             c = tolower(c);
//         }

//         else 
//           c = toupper(c);
//     }


//     cout << s << endl;


//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){



//     string s ; cin >> s;

//    string rev = s;

//    reverse(rev.begin(), rev.end());

//    if(s == rev) cout << "YES" << endl;
//    else cout << "NO" << endl;

//    string s; cin >> s;

//    reverse(s.begin(),s.end());

//    cout << s <<  endl;



//    string s1, s2; cin >> s1 >> s2;

//    sort(s1.begin(),s1.end());
//    sort(s2.begin(),s2.end());

//    if(s1 == s2) cout << "YES" << endl;
//    else cout << "NO" << endl;



//    string s ; cin >> s;

//    map<char , int > freq;

//    for(char c : s) 
//    {
//     freq[c]++;
//    }

//    for(auto it : freq )
//    {
//     cout << it.first << "-" << it.second << endl;
//    }
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int c[n]; 
    for(int i= 0; i<n; i++)
    {
        cin >> c[i];
    }

    int a, b ; cin >> a >> b;

    int maxi = c[a];
    for(int i = a+1 ; i <= b; i++)
    {
       if(c[i] > maxi)
       maxi = c[i];
    }

    cout << maxi << endl;

    return 0;
}


