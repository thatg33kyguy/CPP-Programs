#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    
    int a,b;
    cin >> a >> b;

    if(a==b) cout <<"Bob\n";
    else if((a-b)%2==0) cout << "Bob\n";
    else cout <<"Alice\n";

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