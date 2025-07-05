#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n,x=0;
    string s;
    cin>>n;
    cin>>s;

//learnt diff between break and continue

 for(int i=0; i<=n-1; i++){

    if( s[i]=='0'){
        
        x=1;
        break;
    }
     

    
 }
 if(x) cout<<"yes\n";
 else cout<<"no\n";

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {

        solve();
        
    }

    return 0;
}