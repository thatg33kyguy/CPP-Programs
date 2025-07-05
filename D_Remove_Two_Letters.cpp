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
    string s;
    cin >> s;
    
    int ans=n-1;

    for(int i=0; i<n-2; i++){
        if(s[i]==s[i+2]){
            ans--;
        }
    }

    cout << ans << endl;
    // map<char, int>mp;

    // for(int i=1; i<n; i++){
    //     char rand= s[i-1]+s[i];
    //     mp[rand]++;
    // }

    // for( auto &x: mp){
    //     if(x.second>1ll){
    //       ans--;
    //     }
    // }

    // cout << ans << endl;


    


    
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

