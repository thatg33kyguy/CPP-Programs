#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);
 
 void solve(){

    int n,k, ans=0;
    cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    vector<int> pfs(n+1,0);

    // pfs[0]=v[0];

    for(int i=0; i<n; i++){
        pfs[i+1]=pfs[i]+v[i];
    }

    for(int i=0; i<=k; i++){
        ans=max(ans, pfs[n-(k-i)]- pfs[2*i]);
    }

    cout << ans << endl;
    
}
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

