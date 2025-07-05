#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n>> k>> l>> c>> d>> p>> nl>> np;

    int q,a,b;
     a=(k*l)/nl;
     b=c*d;
     q=p/np;

     int minimum = min({a,b,q})/n ;
     
     cout<< minimum << endl;

    return 0;
}