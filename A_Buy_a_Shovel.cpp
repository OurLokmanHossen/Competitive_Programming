#include <iostream>
using namespace std;

int main() {
    int k, r; cin >> k >> r;

    for (int i = 1; i <= 10; i++) 
    {
        int sum = k * i;

        if (sum % 10 == 0 || sum % 10 == r) 
        {
            cout << i << endl;
            break; 
        }
    }

    return 0;
}
