#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, p; cin >> n >> p;

        vector<int> a(n), b(n);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];

        vector<int> news;

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<a[i] ; j++)
            {
                news.push_back(b[i]);
            }
        }

        sort(news.begin(), news.end());

        int min_cost = p;

        for(int i = 0; i<n-1; i++)
        {
            min_cost += min(p, news[i]);
        }

        cout << min_cost << endl;

        
    }
    
    return 0;
}
