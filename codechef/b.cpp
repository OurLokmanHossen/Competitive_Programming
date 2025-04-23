 
 #include<bits/stdc++.h> 
 using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){

        int n; 
        cin >> n;
        string s;
        cin >> s;
        
        int b_cnt = 0, g_cnt = 0;
        int cnt = 0;
        
        for(char c : s) {
            if(c == 'B') {
                b_cnt++;
            }
            else {
                g_cnt++;
            }
            
            cnt++; 

            if(b_cnt > 2 * g_cnt) 
            break;
        }
        
        cout << cnt << endl;
    }
    return 0;
}
