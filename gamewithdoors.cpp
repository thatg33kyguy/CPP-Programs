#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);
 
 void solve(){

    int l,r;
    cin >> l >> r;
    int a,b;
    cin >> a >> b;


   vector<int>dd(105,0);
   int v = min(r, b)-max(l, a);
if(l<a) dd[a-1] = true;
if(a < l) dd[l-1]= true;
if(b>r) dd[r]= true;
if(r> b) dd[b]= true;
int ans = 0;
for (int i = 1; i <= 101; i++) {

   ans += dd[i];

}
if(v < 0ll) ans = 0ll;
cout << max(1ll, ans+ max(0ll, min(r, b)-max(l, a))) << endl;

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

