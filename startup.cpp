#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

void solve() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, vector<int>> brand_map;

    // Read each bottle's brand and cost, group costs by brand
    for (int i = 0; i < k; i++) {
        int brand, cost;
        cin >> brand >> cost;
        brand_map[brand].push_back(cost);
    }

    vector<int> brand_profits;

    // For each brand, calculate total profit by sorting bottle costs in descending order
    for (auto &[brand, costs] : brand_map) {
        sort(costs.rbegin(), costs.rend());  // Sort costs descending for max profit
        int brand_profit = 0;

        // Calculate profit from the entire set of bottles for this brand
        for (int cost : costs) {
            brand_profit += cost;
        }

        brand_profits.push_back(brand_profit);
    }

    // Sort the total profits by brand in descending order
    sort(brand_profits.rbegin(), brand_profits.rend());

    int max_profit = 0;

    // Sum the top `n` profits (corresponding to the most profitable brands)
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
