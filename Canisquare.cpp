#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n;
    vector<int> v;
    cin >> n;
    int a;
    for( int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    int sum=0;

    for( int i=0; i<n;  i++){
        sum+=v[i];
    }

    if (ceil(sqrt(sum)) == floor(sqrt(sum))) cout << "YES\n";

     else cout << "NO\n";
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