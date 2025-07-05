#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);
 
 void solve(){

    int n;
    cin >>n;

    int ans=n;
    cout << ans << " ";

    while(ans!=1){

        if(ans%2==0){
            ans/=2;
            cout << ans << " ";
        }

        else{
          
            ans*=3;
            ans++;
            cout << ans << " ";
        }
    }
    
}
 
signed main() {

    sherlockholmes
    // int t = 1;
    // cin >> t;
    // while(t--) {
 
       solve();
        
    // }
 
    return 0;
}

