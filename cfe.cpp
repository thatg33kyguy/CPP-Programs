#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int& x : a) cin >> x;

    vector<int> freq(n + 1, 0);
    for (int x : a) {
        if (x <= n) freq[x]++;
    }

    vector<bool> good(n + 1, false);
    good[0] = true;
    for (int m = 1; m <= n; ++m) {
        good[m] = good[m - 1] && freq[m - 1] > 0;
    }

    vector<int> diff(n + 2, 0);
    for (int m = 0; m <= n; ++m) {
        if (!good[m]) continue;
        int l = freq[m];
        int r = n - m;
        if (l <= r) {
            diff[l]++;
            diff[r + 1]--;
        }
    }

    vector<int> ans(n + 1, 0);
    int cur = 0;
    for (int k = 0; k <= n; ++k) {
        cur += diff[k];
        ans[k] = cur;
    }

    for (int k = 0; k <= n; ++k) {
        cout << ans[k] << (k == n ? '\n' : ' ');
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
