#include <bits/stdc++.h>
using namespace std;

#define int long long
const int INF = 1e9; // A large number representing "impossible"

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(x + 1, INF);
    dp[0] = 0; // Base case: sum 0 requires 0 coins

    for (int i = 1; i <= x; i++) {
        for (int coin : coins) {
            if (i >= coin) {
                dp[i] = min(dp[i], 1 + dp[i - coin]);
            }
        }
    }

    cout << (dp[x] == INF ? -1 : dp[x]) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
