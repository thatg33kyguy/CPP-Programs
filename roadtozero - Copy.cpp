#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int x,y,a,b;

    cin >> x >> y;
    cin >> a >> b;

    if (x==0 && y==0) cout << 0 << endl;

    else{
        int j=abs(x);
        int l=abs(y);
        int z=min(j,l);

        int m= min((abs(j-l)*a)+z*b, (j+l)*a);

        cout << m << endl;


    
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