#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int a,b;
    cin >> a >> b;

    int m= a*b;

    if(b==1) cout <<"no" << endl;

    else{
        cout << "yes" << endl;
        cout << a << " " << m << " " << a+m << endl;
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