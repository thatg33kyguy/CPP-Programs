#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    vector<int> v={1,5,10,20,100};
    int n;
    cin >> n;
    int temp=n, ans=0;

    for(int i=4; i>=0; i--){
        if(temp>=v[i]){
            ans+=(temp/v[i]);
            temp=temp%v[i];
        }
    }

    cout << ans << endl;

    


    
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

