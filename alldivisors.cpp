
#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<< i<<" ";
        }
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



