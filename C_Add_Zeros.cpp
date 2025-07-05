#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>

using namespace std;
typedef long long ll;

int t;
ll n;
vector<ll> arr;
unordered_map<ll, vector<ll>> mp;
map<ll, ll> dp;

ll solve(ll s) {
    if (dp.count(s)) return dp[s];
    ll ans = s;
    if (mp.count(s)) {
        for (ll i : mp[s]) {
            ll s_new = s + i - 1;
            ans = max(ans, solve(s_new));
        }
    }
    return dp[s] = ans;
}

int main() {

    cin >> t;
    while (t--) {
        cin >> n;
        arr.resize(n + 1); 
        mp.clear();
        dp.clear();

        for (ll i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
        for (ll i = 2; i <= n; ++i) {
            ll s_i = arr[i] + i - 1;
            mp[s_i].push_back(i);
        }
        ll result = solve(n);
        cout << result << '\n';
    }
    return 0;
}