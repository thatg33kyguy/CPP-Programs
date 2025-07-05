#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N = 2e5 + 10, inf = 1e9 + 10;
const int mod1 = (1e9 + 7);
const int mod2 = (998244353);

void solve() {
    int n;
    cin >> n;

    char arr[n][4];
    vector<int> v;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            // if (arr[i][j] == '0') {
            //     continue;
            // }
            
            if (arr[i][j] == '#') {
                v.push_back(j + 1);
                break;
            }
        }
    }

    // Sort in descending order
    // sort(v.begin(), v.end(), greater<int>());

    // Print the result
    for (int i = n-1; i >=0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
