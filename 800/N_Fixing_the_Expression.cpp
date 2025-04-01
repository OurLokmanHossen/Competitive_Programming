#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char a = s[0];
        char b = s[2];
        char op;
        if(a < b) op = '<';
        else if(a > b) op = '>';
        else op = '=';
        cout << a << op << b << "\n";
    }
    return 0;
}
