#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

void solve() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, vector<int>> brand_map;

    
    for (int i = 0; i < k; i++) {
        int b, c;
        cin >> b >> c;
        brand_map[b].push_back(c);
    }

    vector<int> brand_profits;

    for (auto it = brand_map.begin(); it != brand_map.end(); ++it) {
        vector<int>& costs = it->second;
        sort(costs.rbegin(), costs.rend());  
        int brand_profit = 0;

        
        for (int c : costs) {
            brand_profit += c;
        }

        brand_profits.push_back(brand_profit);
    }

    
    sort(brand_profits.rbegin(), brand_profits.rend());

    int max_profit = 0;

    
    for (int i = 0; i < min(n, (int)brand_profits.size()); i++) {
        max_profit += brand_profits[i];
    }

    cout << max_profit << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
