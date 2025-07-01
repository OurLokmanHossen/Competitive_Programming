#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();

   int freq[256] = {0}, uniElement = 0;

    // for(char c : s)
    // {
    //     if(freq[c] == 0) uniElement++;
    //     freq[c]++;
    // }

    for(int i = 0; i<n; i++){
        if(freq[s[i]] == 0) uniElement++;
        freq[s[i]]++;
    }

    if(uniElement % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}