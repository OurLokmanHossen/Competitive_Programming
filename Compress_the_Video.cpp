#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin >> t;
	while(t--)
	
	{
	    int n; cin >> n;
	    
	    int a[n];
	    
	    bool flag = false;
	    
	    for(int i = 0; i<n;i++)
	    {
	        if(a[i] == a[i+1])
	        {
	           flag = true; 
	        }
	    }
	    
	    if(flag) cout << n-1 << endl;
	    else cout << n << endl;
	}

}
