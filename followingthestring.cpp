#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

// 
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, char> mp;
    string s = "";
    
    vector<int> trace(n);

    for (int i = 0; i < n; i++) {
        cin >> trace[i];
    }

    vector<int> cnt(26, 0);

    for (int j = 0; j < n; j++) {
        int idx = 0;

        while (cnt[idx] > trace[j]) {
            idx++;
        }
        cnt[idx]++;
        s += 'a' + idx;
    }

    cout << s << endl;
}


signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {

        solve();
        
    }

    return 0;
}