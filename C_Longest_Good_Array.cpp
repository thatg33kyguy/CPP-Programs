#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int l,r;
    cin >> l >> r;

    int res=1;
    int curr=l;
    int diff=1;

     
    while(curr<=r){
         int next= curr+ diff;

         if(next>r) break;

         res++;
         curr=next;
         diff++;
    }

    cout << res << endl;

    


    
}
 
signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

