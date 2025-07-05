//14dec

#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int x,y,k;
    cin>>x>>y>>k;

    if(x>y) {
        cout<<x<<"\n" ;
    }
    else{
        int z=(y-(x+k));
         if(z<0) cout<<y<<"\n";
         else cout<<y+z<<"\n";
    }


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