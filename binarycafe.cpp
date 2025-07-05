#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

int gcd(int a, int b){
    if(b == 0) return a; return gcd(b, a % b);
}
 

 void solve(){

    int n,k;
    cin >> n >> k;
    int xx= min(k,30ll);

    cout << std::min( (1ll<<xx), n+1ll) << endl;


    
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

