#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin >> t;
	while(t--)
	{
	    int n; cin  >> n;
	    int a[n];
	    
	    int s = 0; 
	    bool found = true;
	    
	    for(int i = 0; i<n; i++) 
	    {
	        cin >> a[i];
	        
	        s += a[i];
	        
	        double avg = (double) s / (i+1); // 1 index
	        
	        if(avg < 40)
	        {
	            found = false;
	        }
	        
	        
	       
	    }
	    
	    if(found) cout << "YES" << endl;
	    else cout << "NO" << endl;
	    
	   
	}

}
