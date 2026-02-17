/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> prime;

    bool f[100000] = {false};

   void seive(int n)
   {

     f[1] = true;

       for(int i = 2; i<= n; i++)
       {
          if(f[i] == false)
          {
          prime.push_back(i);

          for(int j = i + i; j<= n; j+= i)
          {
            f[j] = true;
          }
        }
       }
   }

int main(){

    
    int n; cin >> n;

    seive(n);

    for(auto it : prime)
    {
        cout << it << " ";
    }

    cout << endl;


    return 0;
}

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    vector<int> prime;

    vector<bool> f(n+1, false);

    f[1] = true;

    for(int i = 2; i<=n; i++)
    {
        if(f[i] == false)
        {
            prime.push_back(i);

            for(int j = i + i; j <= n; j += i) // j = i * i
            {
                f[j]=true;
            }
        }
    }

    for(auto it : prime)
    {
        cout << it << " ";
       
    }

    // for(int i = 0; i<prime.size(); i++)
    // {
    //     cout << prime[i] << endl;
       
    // }

    




    return 0;
}
