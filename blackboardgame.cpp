#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n;
    cin >> n;

     int cnt[4] = {0};
    for (int i = 0; i < n; ++i) {
        cnt[i % 4]++;
    }

    int p1 = min(cnt[0], cnt[3]);
    cnt[0] -= p1;
    cnt[3] -= p1;

    int p2 = min(cnt[1], cnt[2]);
    cnt[1] -= p2;
    cnt[2] -= p2;

    int remaining = cnt[0] + cnt[1] + cnt[2] + cnt[3];

   
    cout <<  (remaining % 2 == 1 ? "Alice" : "Bob") << endl;

    


    
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

