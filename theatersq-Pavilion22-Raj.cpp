#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,m,a;
    cin >> n >> m >> a;

    int p= n/a + bool(n%a);
    int q= m/a + bool(m%a);

    cout << p*q ;

}