#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

   int n,p, l, t;
   cin >> n >> p >> l >> t;
    
    

    int cc= (n+6ll)/7ll;
    int lo=0, hi=n;
    

    while(hi-lo>1){
        int mid=lo+(hi-lo)/2;
        if((mid*l +min(2*mid, cc)*t)>=p){
            hi=mid;
        }
        else lo=mid;
    }





   

    cout << n-hi << endl;
    
}
 
signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
 
        solve();
        
    }
 
    return 0;
}

