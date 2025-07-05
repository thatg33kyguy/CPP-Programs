#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

const int N = 2e5 + 10, inf = 1e9 + 10;
const int mod1 = (1e9 + 7);
const int mod2 = (998244353);

void solve() {
    vector<int> arr[3] = {vector<int>(3, 0), vector<int>(3, 0), vector<int>(3, 0)};
    vector<int> ind[3] = {vector<int>(3, 0), vector<int>(3, 0), vector<int>(3, 0)};
    int ans = 0;

    int n;
    cin >> n;

    for (int i = 0; i < 3; i++) {
        vector<int>& ar = arr[i];
        vector<int>& in = ind[i];

        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;

            int k;
            for (k = 0; k < 3; k++)
                if (a > ar[k]) break;

            if (k < 3) {
                for (int l = 2; l > k; --l) {  // Limit to 2 to prevent out-of-bounds
                    ar[l] = ar[l - 1];
                    in[l] = in[l - 1];
                }
                ar[k] = a;
                in[k] = j;
            }
        }
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (ind[0][i] != ind[1][j])
                for (int k = 0; k < 3; k++)
                    if (ind[0][i] != ind[2][k] && ind[1][j] != ind[2][k])
                        ans = max(ans, arr[0][i] + arr[1][j] + arr[2][k]);

    cout << ans << '\n';  // Ensure output is printed
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
