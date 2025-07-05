#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    int x,y,k;
    cin >> x >> y >> k ;

    int j= k-1+y*k;

    int m= (j+x-2)/(x-1);
    //how to deal with finding the ceiling value of an operation without floats or doubles

    cout << m+k << endl;



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