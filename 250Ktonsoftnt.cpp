#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);



 void solve(){

    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int ans=-1;

    for(int d=1; d<=n; d++){

        if(n%d==0){
            int mx=-1e18, mn= 1e18;
            for(int i=0; i<n; i+=d){
                int sm=0;
                for(int j=i; j< i+d; j++){
                    sm+=a[j];
                }

                mx=max(mx,sm);
                mn=min(mn,sm);

            }
            ans= max(ans, mx-mn);
        }
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

