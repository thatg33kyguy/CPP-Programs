#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

// int gcd(int a, int b)
// {
//   if (a == 0)
//     return b;
//   return gcd(b % a, a);
// }



 int solve(){

    int n,a,b;
    int ans=0;
    cin >> n >> a >> b;

    vector<int> v(n);

    for(int i=0; i<n; i++){

        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int lo=v[0], hi=v[n-1];

    ans=v[n-1]-v[0];

    // if(ans<a && ans<b){

    //     cout << 0ll << endl;
    //     return;
    // }
      if (a == b) {
        cout << 0ll << endl;
    } else {
        cout << ans % abs(a - b) << endl;
    }



    
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

