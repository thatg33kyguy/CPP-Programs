#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

 void solve(){
   
   int n, ans=0;
   cin >> n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
    cin >> v[i];
   }

   for(int i=0; i<n; i++){
        ans= __gcd(abs(v[i]-v[n-i-1]), ans);
       
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

