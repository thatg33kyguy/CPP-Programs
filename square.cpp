#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    int a,b,c,d,e,f,g,h;

    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    cin >> g >> h;

    // int A=abs(a);
    // int B=abs(b);
    // int C=abs(c);
    // int D=abs(d);

    // int E=abs(e);
    // int F=abs(f);
    // int G=abs(g);
    // int H=abs(h);

    if(a==c) cout << (d-b)*(d-b)<< endl;
    else if( a==e) cout << (f-b)*(f-b) << endl;
    else cout <<  (h-b)*(h-b) << endl;
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