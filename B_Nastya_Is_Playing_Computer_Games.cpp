#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n,k;
    cin >> n >> k;

    int ans= n-1+ 5+ min(n-k,k-1)+ 2*(n-2);

    cout << ans << endl;

//    cout <<  3*n+min(n-k,k-1) << endl;
 



    


    
}
 
signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    // int t = 1;
    // cin >> t;
    // while(t--) {
 
        solve();
        
    // }
 
    return 0;
}

