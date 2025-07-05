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

    vector<string>s(2);
    int cnt=0;

    for(auto &x : s) cin >> x;

    for(int i=1; i<n-1; i++){
        
        if( s[0][i]=='.' &&  s[0][i-1]=='.' && s[1][i-1]=='x' && s[0][i+1]=='.' && s[1][i+1]=='x'  && s[1][i]=='.'){

            cnt++;
        }

        else if( s[1][i]=='.'  &&    s[1][i-1]=='.' && s[0][i-1]=='x' && s[1][i+1]=='.' && s[0][i+1]=='x' && s[0][i]=='.'){
            cnt++;
        }




    }

    cout << cnt << endl;
   

    
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

