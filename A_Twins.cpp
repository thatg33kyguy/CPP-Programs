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
    vector<int> v(n);
    int ans=0, cnt=0;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(all(v));

    int sum= accumulate(v.begin(), v.end(), 0);
     
     int i=n-1;
    while(sum>=ans){
        ans+=v[i];
        sum-=v[i];
        cnt++;
        i--;

    }    

    cout << cnt << endl;
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

