#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

int n,a,b;
cin >> n >> a >> b;

if(n%2==0){
    
    cout << min(a*n, (n/2)*b) << endl;
}

else{

    cout << min(a*n, b*((n-1)/2)+a) << endl;
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